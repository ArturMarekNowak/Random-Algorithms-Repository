using System;

namespace GaussDeterminant
{
	class Program
	{
		public static double detGauss(double[,] anotherMatrix)
		{
			double temp = 0.0;
			for(int i = 0; i < anotherMatrix.GetLength(0); i++)
				for(int j = 0; j < anotherMatrix.GetLength(0) - i - 1; j++)
				{
					temp = anotherMatrix[i + j + 1, i];
					temp *= -1;
				
					for(int k = 0; k < anotherMatrix.GetLength(0); k++)
						anotherMatrix[i + j + 1, k] += anotherMatrix[i, k] * temp / anotherMatrix[i, i];
				}

			double det = 1.0;
			for(int i = 0; i < anotherMatrix.GetLength(0); i++)
				det *= anotherMatrix[i, i];

			return det;
		}
		
		public static void printMatrix(double[,] someMatrix)
		{
			for(int i = 0; i < someMatrix.GetLength(0); i++)
			{
				for(int j = 0; j < someMatrix.GetLength(1); j++)
				{
					Console.Write($"{someMatrix[i, j]} ");
				}
				Console.WriteLine();
			}
		}

		public static void Main(string[] args)
		{
			Random rnd = new Random();
			int dim = rnd.Next(2, 8);
			double[,] matrix = new double[dim, dim];

			Console.WriteLine(dim);

			for(int i = 0; i < dim; i++)
				for(int j = 0; j < dim; j++)
					matrix[i, j] = rnd.Next(1, 10);
			
			printMatrix(matrix);

			Console.WriteLine(detGauss(matrix));
		
		}
	}
}

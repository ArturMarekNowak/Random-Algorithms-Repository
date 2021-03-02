using System;
using System.Collections.Generic;

namespace detLaplace
{
	class Program
	{
			
		public static int[,] getMinor(int[,] matrix, int row, int col)
		{
			int dim = matrix.GetLength(0);
			int[,] retArr = new int[dim - 1, dim - 1];
			
			for(int i = 0; i < dim; i++)
			{
				if(i != row)
				{
					for(int j = 0; j < dim; j++)
						if (j != col)
                				{
                    					if (i < row && j < col)
                        					retArr[i, j] = matrix[i, j];
                    					else if (i < row && j > col)
                        					retArr[i, j-1] = matrix[i, j];
                    					else if (i > row && j < col)
                        					retArr[i-1, j] = matrix[i, j];
                    					else
                        					retArr[i-1, j-1] = matrix[i, j];
                				}
				}
			}
			
			return retArr;
		}
		

		public static double detLaplace(int[,] matrix)
		{
			if(matrix.GetLength(0) == 2)
				return matrix[0, 0] * matrix[1, 1] - matrix[0, 1] * matrix[1, 0];

			double determinant = 0.0;

			for(int i = 0; i < matrix.GetLength(0); i++)
				determinant += Math.Pow(-1, (1 + (i + 1))) * matrix[0, i] * detLaplace(getMinor(matrix, 0, i));	
			
			return determinant;
		}

		public static void printMatrix(int[,] someMatrix)
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
			int[,] matrix = new int[dim, dim];

			for(int i = 0; i < dim; i++)
				for(int j = 0; j < dim; j++)
					matrix[i, j] = rnd.Next(1, 10);

			printMatrix(matrix);
			Console.WriteLine();
			Console.WriteLine(detLaplace(matrix));

			//printMatrix(getMinor(matrix, 1, 1));
			

			
		}
	}
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Numerics;

namespace BisectionMethod
{
	class Program
	{
		public static double function(List<double> coeffs, double x)
		{
			double result = 0.0;
			double size = coeffs.Count;

			for(int i = 0; i < size; i++)
				result += coeffs[i] * Math.Pow(x, size - i - 1);
			
			return result;
		}

		public static void bisectionMethod(List<double> coeffs, double leftEnd, double rightEnd, double precision)
		{
			if(function(coeffs, leftEnd) * function(coeffs, rightEnd) > 0)
			{
				Console.WriteLine("Root cannot be found");
				return;	
			}

			double temp = 0.0;

			while(rightEnd - leftEnd > precision)
			{
				temp = (leftEnd + rightEnd) / 2;

				if(function(coeffs, leftEnd) * function(coeffs, temp) < 0)
					rightEnd = temp;
				else
					leftEnd = temp;
			}
			Console.WriteLine(temp);
		}

		public static void Main(string[] args)
		{
			//Roots
			//One: -5, -1, 3
			//Two: -3, -2, 1, 2, 3
			List<double> coeffsOne = new List<double>{1.0, 3.0, -13.0, -15.0};
			List<double> coeffsTwo = new List<double>{1.0, -1.0, -13.0, 13.0, 36.0, -36};
			
			bisectionMethod(coeffsOne, -10.123, -4.456, 0.1);
			bisectionMethod(coeffsOne, -4.789, 2.123, 0.01);
			bisectionMethod(coeffsOne, -0.512, 5.123, 0.001);
			bisectionMethod(coeffsTwo, -4, -3.5, 0.0001);
			bisectionMethod(coeffsTwo, 0, 2.5, 0.00001);
			bisectionMethod(coeffsTwo, 0.123, 4.123, 0.000001);
			bisectionMethod(coeffsTwo, -2.97, -1.12, 0.0000001);
		}
	}
}


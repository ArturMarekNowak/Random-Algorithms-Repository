using System;
using System.Collections.Generic;

namespace RiemannIntegral
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

		public static double RiemannIntegral(double a, double b, int n, List<double> coeffs)
		{
			double d = (b - a) / n, P = 0.0, x = 0.0;
			int k = 0;

			while(k != n)
			{
				x = a + d * k + d / 2;

				P += d * function(coeffs, x); 
				k++;
			}
			return P;
		}

		public static void Main(string[] args)
		{
			List<double> polynomialCoeffs = new List<double>{1.0, -1.0, -13.0, 13.0, 36.0, -36.0};
			
			Console.WriteLine(RiemannIntegral(1, 3, 100, polynomialCoeffs));

		}
	}
}

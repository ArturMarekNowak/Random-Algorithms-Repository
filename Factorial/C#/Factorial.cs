using System;
using System.Numerics;

namespace Factorial
{ 
	class Program
	{
		public static BigInteger recursFactorial(BigInteger n)
		{
			if(n == 1 || n == 0)
				return 1;
			
			if(n == 2)
				return 2;

			return n * recursFactorial(n - 1);
		}

		public static BigInteger iteratFactorial(BigInteger n)
		{
			BigInteger result = 1;

			for(int i = 1; i < n + 1; i++)
				result *= i;

			return result;
		}

		public static double gosperFactorial(int n)
		{
			return Math.Pow((2 * n + 1.0/3.0) * Math.PI, 0.5) * Math.Pow(n, n) * Math.Exp((-1) * n);
		}

		private static void Main(string[] args)
		{
			Console.WriteLine(recursFactorial(10));
			Console.WriteLine(iteratFactorial(10));
			Console.WriteLine(gosperFactorial(10));
			Console.WriteLine();
			Console.WriteLine(recursFactorial(25));
			Console.WriteLine(iteratFactorial(25));
			Console.WriteLine(gosperFactorial(25));
			Console.WriteLine();
			Console.WriteLine(recursFactorial(100));
			Console.WriteLine(iteratFactorial(100));
			Console.WriteLine(gosperFactorial(100));
		}
	}
}

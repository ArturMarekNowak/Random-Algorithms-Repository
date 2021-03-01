using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Numerics;

namespace BinomialCoefficient
{
	class Program
	{
		public static BigInteger factorial(BigInteger N)
		{
			
			if(N == 0 || N == 1)
				return 1;

			BigInteger result = 1;
			

			for(BigInteger i = 2; i < N + 1; i++)
			{	
				result *= i;
			}

			return result;
		}

		public static BigInteger binomialCoefficient(BigInteger n, BigInteger k)
		{
			BigInteger result = 1;
			
			result = factorial(n) / (factorial(n - k) * factorial(k));

			return result;

		}
		
		//https://stackoverflow.com/questions/9619743/how-to-calculate-binomial-coefficents-for-large-numbers
		public static BigInteger binomialCoefficientStack(BigInteger n, BigInteger k)
		{
			BigInteger result = 1;
			if(k > n - k)
				k = n - k;

			for(BigInteger i = 1; i < k + 1; i++)
			{
				result *= n - k + i;
				result /= i;
			}

			return result;
		}

		public static void Main(string[] args)
		{
			Console.WriteLine(binomialCoefficient(40, 20));
		 	Console.WriteLine(binomialCoefficientStack(40, 20));	
		}
	}
}


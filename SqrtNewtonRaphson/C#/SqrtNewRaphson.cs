using System;

namespace SqrtNewRaphson
{
	class Program
	{
		public static decimal SqrtNR(int number, decimal precision)
		{
			decimal a = number;

			while(a - number / a > precision)
				a = (a + number / a) / 2;

			return a;
		}

		public static void Main(string[] args)
		{
			Console.WriteLine(SqrtNR(400, 0.01m));
		}
	}
}

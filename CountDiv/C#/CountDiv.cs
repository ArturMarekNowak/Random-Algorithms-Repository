using System;

namespace CountDiv
{
	class Program
	{
		public static int CountDiv(int A, int B, int K)
		{
			if(A % K == 0) 
				return (B / K) - (A / K) + 1;
			else
				return (B / K) - (A / K);
		}

		public static void Main(string[] args)
		{
			Console.WriteLine(CountDiv(6, 11, 2));
		}
	}
}


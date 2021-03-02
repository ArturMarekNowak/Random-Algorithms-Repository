using System;

namespace GCDandSCM
{
	class Program
	{
		public static int gcdEuclidian(int a, int b)
		{
			while(a != b)
			{
				if(a > b)
					a = a - b;
				else if(b > a)
					b = b - a;
			}
			return a;
		}

		public static int gcdEuclidianMod(int a, int b)
		{
			while(a > 0)
			{
				a = a % b;
				b = b - a;
			}
			return b;
		}

		public static int scm(int a, int b)
		{
			return a * b / gcdEuclidian(a, b);
		}


		public static void Main(string[] args)
		{
			Console.WriteLine(gcdEuclidian(12, 20));
			Console.WriteLine(gcdEuclidianMod(20, 12));
			Console.WriteLine(scm(12, 20));
		}
	}
}


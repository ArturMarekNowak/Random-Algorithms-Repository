using System;

namespace FrogJump
{
	class Program
	{
		public static int frogJump(int X, int Y, int D)
		{
			if(X >= Y)
				return 0;

			if((X - Y) % D == 0)
				return (Y - X) / D;

			return (Y - X) / D + 1;
		}

		public static void Main(string[] args)
		{
			Console.WriteLine(frogJump(10, 85, 30));
		}
	}
}

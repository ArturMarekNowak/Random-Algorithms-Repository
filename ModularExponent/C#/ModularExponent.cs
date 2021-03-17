using System;

namespace ModularExponent
{
	class Program
	{
		public static int ModularExponent(int baseOfPower, int power, int mod)
		{
			if(mod == 1)
				return 0;

			int result = 1;
			for(int i = 0; i < power; i++)
				result = (result * baseOfPower) % mod;

			return result;
		}

		public static void Main(string[] args)
		{
			Console.WriteLine(ModularExponent(4, 8, 9));
			Console.WriteLine(ModularExponent(111, 23, 7));
			Console.WriteLine(ModularExponent(4, 13, 497));
		}
	}
}


using System;

namespace AreRotations
{
	class Program
	{
		public static bool AreRotations(string a, string b)
		{
			return ((a.Length == b.Length) && ((a + a).IndexOf(b) != -1));
		}

		public static void Main(string[] args)
		{
			Console.WriteLine(AreRotations("AACD", "ACDA"));
			Console.WriteLine(AreRotations("AACD", "AADC"));
		}
	}
}

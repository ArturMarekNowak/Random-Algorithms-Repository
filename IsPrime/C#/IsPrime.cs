using System;
using System.Numerics;
namespace IsPrime
{
	class Program
	{
		public static bool isPrime(int someSmallInt)
		{
			Console.WriteLine("so basically i am very small int in not effective function");
			
			if(someSmallInt == 1)
				return false;

			for(int i = 2; i < someSmallInt; i++)

				if(someSmallInt % i == 0)
					return false;

			return true;

		}

		public static bool isPrime(BigInteger someBigInt)
		{
			Console.WriteLine("so basically i am very big int in not effective function");
			
			if(someBigInt == 1)
				return false;

			for(BigInteger i = 2; i < someBigInt; i++)

				if(someBigInt % i == 0)
					return false;

			return true;

		}
		
		public static bool isPrimeBetter(int someSmallInt)
		{
			Console.WriteLine("so basically i am very small int in effective function");
			
			if(someSmallInt <= 1)
				return false;

			if(someSmallInt <= 3)
				return true;

			if(someSmallInt % 2 == 0 && someSmallInt % 3 == 0)
				return false;

			int i = 5;

			while(i * i <= someSmallInt)
			{
				if(someSmallInt % i == 0 || someSmallInt % (i + 2) == 0)
					return false;
				i = i + 6;
			}

			return true;	
		}

		public static bool isPrimeBetter(BigInteger someBigInt)
		{
			Console.WriteLine("so basically i am very big int in effective function");
		
			if(someBigInt <= 1)
				return false;

			if(someBigInt <= 3)
				return true;

			if(someBigInt % 2 == 0 && someBigInt % 3 == 0)
				return false;

			BigInteger i = 5;

			while(i * i <= someBigInt)
			{
				if(someBigInt % i == 0 || someBigInt % (i + 2) == 0)
					return false;
				i = i + 6;
			}

			return true;	
		}


		public static void Main(string[] args)
		{
			int smallInt = 2;
			BigInteger bigInt = 985466431;

			Console.WriteLine(isPrime(smallInt));
			Console.WriteLine(isPrime(bigInt));	
			Console.WriteLine(isPrimeBetter(smallInt));
			Console.WriteLine(isPrimeBetter(bigInt));	


		}
	}
}

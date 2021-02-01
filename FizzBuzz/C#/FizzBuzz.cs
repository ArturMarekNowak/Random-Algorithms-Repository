using System;
using System.Linq;

class Program
{
	public static void FizzBuzz(int N)
	{
		foreach (int i in Enumerable.Range(1, N))
		{
			if(i % 3 == 0 && i % 5 ==0)
				Console.WriteLine("FizzBuzz");
			else if(i % 3 == 0)
				Console.WriteLine("Fizz");
			else if(i % 5 == 0)
				Console.WriteLine("Buzz");
			else
				Console.WriteLine(i);
		}
	}

	public static void Main(string[] args)
	{
		FizzBuzz(100);
	}
}

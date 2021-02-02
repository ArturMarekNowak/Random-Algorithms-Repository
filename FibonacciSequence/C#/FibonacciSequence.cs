using System;
using System.Collections.Generic;

class FibonacciSeq
{
	public static List<int> FibonacciSequence(int N)
	{	
		List<int> result = new List<int>();
		
		if(N == 1)
		{
			result.Add(0);
		}
		else if(N >= 2)
		{
			result.Add(0);
			result.Add(1);
			
			for(int i = 2; i < N ; i++)
			{
				result.Add(result[i - 1] +  result[i - 2]);	
			}
		}

		return result;
	}

	public static void Main(string[] args)
	{
		List<int> returnedList = FibonacciSequence(25);

		foreach(var item in returnedList)
			Console.Write(item + " ");	
	}
}

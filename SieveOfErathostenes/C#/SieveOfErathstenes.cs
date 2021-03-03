using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

namespace SieveOfErathostenes
{
	class Program 
	{
		public static List<int> Sieve(int N)
		{
			var myList = Enumerable.Repeat(true, 100).ToList();

			//IEnumerable<bool> strings = Enumerable.Repeat(true, 100);
			//List<bool> myList = strings.ToList();

			for(int i = 2; i < Math.Pow(N, 0.5); i++)
				if(myList[i] == true)
					for(int j = i + i; j < N; j += i)
						myList[j] = false;

			List<int> retList = new List<int>();
			for(int i = 0; i < N; i++)
				if(myList[i] == true && i != 0 && i != 1)
					retList.Add(i);

			return retList;
		}

		public static void printList(List<int> anotherList)
		{
			foreach(int member in anotherList)
				Console.Write($"{member} ");
			Console.WriteLine();
		}

		public static void Main(string[] args)
		{
			printList(Sieve(100));	
		}
	}
}

using System;
using System.Collections.Generic;

namespace BinarySearch
{
	class Program
	{
		public static int BinarySearch(List<int> someList, int begin, int end, int val)
		{
			if(end >= begin)
			{
				int middleIndex = (begin + end) / 2;
				
				if(someList[middleIndex] == val)
					return middleIndex;

				if(val >= someList[middleIndex])
					return BinarySearch(someList, middleIndex + 1, end, val);
				else
					return BinarySearch(someList, begin, middleIndex - 1, val);
			}
			return -1;
		}

		public static void printList(List<int> anotherList)
        	{
                	foreach(int member in anotherList)
                        	Console.Write($"{member} ");
                	Console.WriteLine();
	        }

		private static void Main(string[] args)
		{
			List<int> listOne = new List<int>();
			
			for(int i = 0; i < 25; i++)
				listOne.Add(i*i);

			printList(listOne);
			Console.WriteLine("Searched for: 2, index: " + BinarySearch(listOne, 0, listOne.Count, 2));
			Console.WriteLine("Searched for: 4, index: " + BinarySearch(listOne, 0, listOne.Count, 4));
			Console.WriteLine("Searched for: 10, index: " + BinarySearch(listOne, 0, listOne.Count, 10));
			Console.WriteLine("Searched for: 257, index: " + BinarySearch(listOne, 0, listOne.Count, 257));
			Console.WriteLine("Searched for: 256, index: " + BinarySearch(listOne, 0, listOne.Count, 256));
			Console.WriteLine("Searched for: 400, index: " + BinarySearch(listOne, 0, listOne.Count, 400));
			Console.WriteLine("Searched for: 441, index: " + BinarySearch(listOne, 0, listOne.Count, 441));
		}
	}
}


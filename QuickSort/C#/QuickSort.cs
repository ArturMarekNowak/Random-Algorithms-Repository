using System;
using System.Linq;
using System.Collections.Generic;

namespace QuickSort
{
	class Program 
	{
		public static List<int> QuickSort(List<int> someList)
		{
			
			if(someList.Count == 1)
				return someList;
			
			List<int> retList = new List<int>();
			
			if(someList.Count == 0)
				return retList;
			
			int listSize = someList.Count;
			int pivot = someList[listSize - 1];
			retList.Add(pivot);

			for(int i = 0; i < listSize - 1 ; i++)
				if(someList[i] <= pivot)
					retList.Add(someList[i]);
				else
					retList.Insert(0, someList[i]);
			int indexOfPivot = retList.IndexOf(pivot);	
			List<int> firstHalf = QuickSort(retList.GetRange(0, indexOfPivot));
			List<int> secondHalf = QuickSort(retList.GetRange(indexOfPivot + 1, retList.Count - indexOfPivot - 1));
			secondHalf.Insert(0, pivot);
			
			return firstHalf.Concat(secondHalf).ToList();
		}

		public static void printList(List<int> anotherList)
		{
			foreach(int member in anotherList)
				Console.Write($"{member} ");
			Console.WriteLine();
		}


		public static void Main(string[] args)
		{
			Random rnd = new Random();

			List<int> myListOne = new List<int>{12, 3, 5, 6, 23, 2, 9, 13, 8, 4, 7};
			List<int> myListTwo = new List<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
			List<int> myListThree = new List<int>{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
			List<int> myListFour = new List<int>();

			for(int i = 0; i < 30; i++)
				myListFour.Add(rnd.Next(1, 31));

			printList(myListOne);
			printList(myListTwo);
			printList(myListThree);
			printList(myListFour);
			Console.WriteLine("Sorted: ");

			List<int> retList = QuickSort(myListOne);
			printList(retList);
			
 			retList = QuickSort(myListTwo);
			printList(retList);
 
			retList = QuickSort(myListThree);
			printList(retList);
 
			retList = QuickSort(myListFour);
			printList(retList);

		}
	}
}

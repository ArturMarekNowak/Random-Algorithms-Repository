using System;
using System.Collections.Generic;

namespace InsertionSort
{
	class Program
	{
		public static void printList(List<int> anotherList)
		{
			foreach(int member in anotherList)
				Console.Write($"{member} ");
			Console.WriteLine();
		}


		public static void insertionSort(List<int> someList)
		{
			int elem = 0, k = 0;
			for(int i = 1; i < someList.Count; i++)
			{
				elem = someList[i];
				k = i - 1;
				while(k >= 0 && someList[k] >= elem)
				{
					someList[k + 1] = someList[k];
					k--;
				}
				someList[k + 1] = elem;
			}
		}

		public static void Main(string[] args)
		{
			Random rnd = new Random();

			List<int> listOne = new List<int>{12, 3, 5, 6, 23, 2, 9, 13, 8, 4, 7};
			List<int> listTwo = new List<int>{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
			List<int> listThree = new List<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
			List<int> listFour = new List<int>();

			for(int i = 0; i < 30; i++)
				listFour.Add(rnd.Next() % 30);

			insertionSort(listOne);
			insertionSort(listTwo);
			insertionSort(listThree);
			insertionSort(listFour);

			printList(listOne);
			printList(listTwo);
			printList(listThree);
			printList(listFour);
		}
	}
}

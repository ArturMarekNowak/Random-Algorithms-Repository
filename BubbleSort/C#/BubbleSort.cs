using System;
using System.Collections.Generic;
using System.Runtime;

namespace BubbleSort
{
	class Program
	{
		public static void bubbleSort(List<int> someList)
		{
			int temp = 0;
			for(int i = 1; i < someList.Count; i++)
			{
				for(int j = 0; j < someList.Count - i; j++)
				{
					if(someList[j] > someList[j + 1])
					{
						temp = someList[j + 1];
						someList[j + 1] = someList[j];
						someList[j] = temp;
					}
				}
			}
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

			List<int> listOne = new List<int>{12, 3, 5, 6, 23, 2, 9, 13, 8, 4, 7};
			List<int> listTwo = new List<int>{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
			List<int> listThree = new List<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
			List<int> listFour = new List<int>();

			for(int i = 0; i < 30; i++)
				listFour.Add(rnd.Next() % 30);
				
			bubbleSort(listOne);
			bubbleSort(listTwo);
			bubbleSort(listThree);
			bubbleSort(listFour);

			printList(listOne);
			printList(listTwo);
			printList(listThree);
			printList(listFour);
		}
	}
}

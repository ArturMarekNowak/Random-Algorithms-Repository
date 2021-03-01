using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BeadsLength
{
    class Program
    {
	public static List<int> beadsLength(List<int> someList)
	{
		List<int> returnList = new List<int>();
		int counter = 1, j = 1;
		for(int i = 0; i < someList.Count; i++)
		{
			counter = 1;
			j = i;
			while(someList[j] != i)
			{
				j = someList[j];
				counter++;
			}
			returnList.Add(counter);
		}
		return returnList;
	}
	
	public static void printList(List<int> anotherList)
	{
		foreach(int member in anotherList)
			Console.Write($"{member} ");
		Console.WriteLine();
	}

    	static void Main(string[] args)
    	{
		List<int> myList = new List<int> {6, 4, 0, 3, 1, 2, 5};
		List<int> retList = beadsLength(myList);	
    		
		printList(myList);
		printList(retList);
			
	}
    }
}

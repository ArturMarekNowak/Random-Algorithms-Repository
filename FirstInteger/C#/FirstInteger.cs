using System;
using System.Collections.Generic;

namespace FirstInteger
{
	class Program
	{
		public static int firstInteger(List<int> someList)
		{
			int result = 1;

			for(int i = 0; i < someList.Count; i++)
			{
				for(int j = 0; j < someList.Count; j++)
				{
					if(someList[j] == result)
						result++;
				}	
			}

			return result;
		}
		
		public static void Main(string[] args)
		{
			List<int> myListOne = new List<int>{1, 3, 6, 4, 1, 2};
			List<int> myListTwo = new List<int>{1, 2, 3};
			List<int> myListThree = new List<int>{-1, -3};

			Console.WriteLine(firstInteger(myListOne));
			Console.WriteLine(firstInteger(myListTwo));
			Console.WriteLine(firstInteger(myListThree));
		}
	}
}

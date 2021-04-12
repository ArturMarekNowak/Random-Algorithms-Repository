using System;

namespace Distinct
{
	class Program
	{
		public static int Distinct(int [] someArr)
		{
			if(someArr.Length == 0)
				return 0;
			
			Array.Sort(someArr);
			int result = 1;
			for(int i = 1; i < someArr.Length; i++)	
				if(someArr[i - 1] != someArr[i])
					result += 1;
			
			return result;
		}

		public static void Main(string[] args)
		{
			int [] arrOne = {2, 1, 1, 2, 3, 1};

			Console.WriteLine(Distinct(arrOne));	
		}
	}
}

using System;

namespace MaxProductOfThree
{
	class Program
	{
		public static int MaxProductOfThree(int [] someArr)
		{
			Array.Sort(someArr);
			
			//Or you can do without reversing but changing the return	
			Array.Reverse(someArr);
		
			return Math.Max(someArr[0] * someArr[1] * someArr[2],
					someArr[0] * someArr[someArr.Length - 1] * someArr[someArr.Length - 2]);
		}

		public static void Main(string[] args)
		{
			int [] arrOne = {-3, 1, 2, -2, 5, 6};
			Console.WriteLine(MaxProductOfThree(arrOne));
		}
	}
}

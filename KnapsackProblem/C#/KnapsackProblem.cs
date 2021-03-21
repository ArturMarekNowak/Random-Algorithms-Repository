using System;

namespace KnapsackProblem
{
	class Program
	{
		public static int Max(int a, int b)
		{
			return (a > b) ? a : b;
		}

		public static int KnapsackProblem(int [,] someArr, int index, int capacity)
		{
			if(index == 0 || capacity == 0)
				return 0;
			else if(someArr[index, 0] > capacity)
				return KnapsackProblem(someArr, index - 1, capacity);
			else
			{
				int tempOne = KnapsackProblem(someArr, index - 1, capacity);
				int tempTwo = someArr[index, 1] + KnapsackProblem(someArr, index - 1, capacity - someArr[index, 0]);
				return Max(tempOne, tempTwo);
		
			}
		}

		public static void Main(string[] args)
		{
			int [,] weightsAndValuesOne = new int [,] {{1, 5}, {2, 3}, {4, 5}, {2, 3}, {5, 2}};
			int [,] weightsAndValuesTwo = {{10, 60}, {20, 100}, {30, 120}};

			Console.WriteLine(KnapsackProblem(weightsAndValuesOne, weightsAndValuesOne.GetLength(0) - 1, 10));
			Console.WriteLine(KnapsackProblem(weightsAndValuesTwo, weightsAndValuesTwo.GetLength(0) - 1, 50));
		}
	}
}


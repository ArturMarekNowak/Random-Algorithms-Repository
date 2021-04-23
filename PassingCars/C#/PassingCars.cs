using System;

namespace Codility
{
	class Program
	{
		
		public static int PassingCars(int[] A) {
        		if(A.Length == 1)
            			return 0;

        		int counter = 0, result = 0;
        		foreach(var i in A)
        		{
            			if(i == 0)
                			counter++;
            
            			if(i == 1)
            			{
                			result += counter;
                			if(result > 1e9)
                    				return -1;
            			}

        		}
        		return result;
    		}

		public static void Main(string[] args)
		{
			int [] arrOne = {0, 1, 0, 1, 1};

			Console.WriteLine(PassingCars(arrOne));
		}
	}
}


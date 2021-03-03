using System;
using System.Numerics;

namespace PiNumber
{
	class Program 
	{
		public static double piNumber(double numberOfAllPoints)
		{
			double xCoord = 0.0, yCoord = 0.0, numberOfPointsInsideCircle = 0.0;
			
			Random rnd = new Random();
			
			for(int i = 0; i < numberOfAllPoints; i++)
			{

				xCoord = rnd.NextDouble();
				yCoord = rnd.NextDouble();

				if(xCoord * xCoord + yCoord * yCoord <= 1)
					numberOfPointsInsideCircle++;
			}

			return 4 * numberOfPointsInsideCircle / numberOfAllPoints;
		}

		public static void Main(string[] args)
		{
			Console.WriteLine(piNumber(10000000));	
		}
	}
}


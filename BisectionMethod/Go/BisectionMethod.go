package main

import (
	"fmt"
	"math"
)

func function(sliceOfCoefficients []float64, point float64) float64 {

	var value float64 = 0.0
	var sliceLength = len(sliceOfCoefficients)
	for i := 0; i < sliceLength; i++ {
		
		value += sliceOfCoefficients[i] * math.Pow(point, float64(sliceLength - 1 - i))
	}

	return value
}

func bisectionMethod(sliceOfCoefficients []float64, leftBoundary float64, rightBoundary float64, precision float64) float64 {

	if (function(sliceOfCoefficients, leftBoundary) * function(sliceOfCoefficients, rightBoundary) > 0) {
		
		fmt.Println("Root cannot be calculated")
		return 0.0
	}

	var newBoundary float64 = 0.0
	for ((rightBoundary - leftBoundary) >= precision) {
		
		newBoundary = (rightBoundary + leftBoundary) / 2.0

		if(function(sliceOfCoefficients, leftBoundary) * function(sliceOfCoefficients, newBoundary) < 0) {
			
			rightBoundary = newBoundary
		} else {
			
			leftBoundary = newBoundary
		}
	}

	return newBoundary
}

func main() {
	
	//Roots: -5, -1, 3
	sliceOne := []float64{1.0, 3.0, -13.0, -15.0}

	//Roots: -3, -2, 1, 2, 3
	sliceTwo := []float64{1.0, -1.0, -13.0, 13.0, 36.0, -36.0}

	fmt.Println(bisectionMethod(sliceOne, -10.123, -4.456, 0.01))
	fmt.Println(bisectionMethod(sliceOne, -4.789, 2.123, 0.00001))
	fmt.Println(bisectionMethod(sliceOne, -0.512, 5.123, 0.000001))
	fmt.Println(bisectionMethod(sliceOne, -4, -3.5, 0.00001))
	fmt.Println(bisectionMethod(sliceTwo, 0, 2.5, 0.000001))
	fmt.Println(bisectionMethod(sliceTwo, 0.123, 4.123, 0.000001))
	fmt.Println(bisectionMethod(sliceTwo, -2.97, -1.12, 0.000001))
}

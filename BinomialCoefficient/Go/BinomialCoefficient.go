package main

import (
	"fmt"
)

func factorial(n int) uint64 {
	
	if(n == 0 || n == 1) {
		
		return 1
	}
	
	var result uint64 = 1
	for i := uint64(2); i < uint64(n) + 1; i++ {

		result *= i
	}

	return result
}

func binomialCoefficient(n int, k int) uint64 {

	return factorial(n) / (factorial(k) * factorial(n - k))
}

func main() {

	fmt.Println(binomialCoefficient(7, 2))
	fmt.Println(binomialCoefficient(15, 2))
}

package main

import "fmt"

func sqrtNR(number float64, precision float64) float64 {
	
	var result = number
	for result - number / result > precision {
		
		result = (result + number / result) / 2

	}

	return result
}

func main() {
	
	fmt.Println(sqrtNR(737, 0.0001))
}

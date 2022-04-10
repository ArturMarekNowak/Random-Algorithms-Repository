package main

import (
	"fmt"
)

func binarySearch(slice []int, value int) int {

	var beginning = 0
	var end = len(slice) - 1
	
	for end >= beginning {

		var middleIndex = (beginning + end) / 2
		var middleValue = slice[middleIndex]

		if(value == middleValue) {
			
			fmt.Println(value, " was found")
			return middleIndex
		
		} else if (value < middleValue) {
			
			end = middleIndex - 1
		
		} else {
			
			beginning = middleIndex + 1
		
		}
	}

	fmt.Println(value, "was not found")
	return -1
}

func main() {

	slice := []int{}
	
	for i := 0; i < 30; i++ {
		slice = append(slice, i*i)
	}
	
	fmt.Println(slice)
	fmt.Println(binarySearch(slice, 2))
	fmt.Println(binarySearch(slice, 4))
	fmt.Println(binarySearch(slice, 10))
	fmt.Println(binarySearch(slice, 257))
	fmt.Println(binarySearch(slice, 256))
	fmt.Println(binarySearch(slice, 400))
	fmt.Println(binarySearch(slice, 441))
}

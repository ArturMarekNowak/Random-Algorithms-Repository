package main

import (
	"fmt"
)

func beadsLength(slice []int) []int {


	counter := 1
	temp := 0
	resultSlice := []int{}

	for i := 0; i < len(slice); i++ {
	
		counter = 1
		temp = i
		for i != slice[temp]	{
			counter++;
			temp = slice[temp]
		}
		resultSlice = append(resultSlice, counter)
	}

	return resultSlice
}

func main() {

	var slice = []int{6, 4, 0, 3, 1, 2, 5}
	
	fmt.Println(slice)
	fmt.Println(beadsLength(slice))
}

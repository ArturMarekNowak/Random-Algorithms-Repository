package main

import (
	"fmt"
	"math/rand"
	"time"
)

func bubbleSort(slice []int) []int {

	for i := 0; i < len(slice); i++ {

		for j := 0; j < len(slice) - i - 1; j++ {
			
			if slice[j + 1] > slice[j] {
				slice[j], slice[j + 1] = slice[j + 1], slice[j]
			}
		}
	}

	return slice
}

func main() {

	var sliceOne = []int{12, 3, 5, 6, 23, 2, 9, 13, 8, 4, 7}
	var sliceTwo = []int{10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
	var sliceThree = []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
	var sliceFour = []int{}

	rand.Seed(time.Now().UnixNano())
	for i := 0; i < 10; i++ {
		sliceFour = append(sliceFour, rand.Intn(100))
	}

	fmt.Println(sliceOne)
	fmt.Println(sliceTwo)
	fmt.Println(sliceThree)
	fmt.Println(sliceFour)

	fmt.Println(bubbleSort(sliceOne))
	fmt.Println(bubbleSort(sliceTwo))
	fmt.Println(bubbleSort(sliceThree))
	fmt.Println(bubbleSort(sliceFour))
}

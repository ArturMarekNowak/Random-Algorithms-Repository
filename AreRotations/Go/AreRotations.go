package main

import (
	"fmt"
	"strings"
)

func areRotations(a string, b string) bool {

	var concatenatedStrings = a + a
	return strings.Contains(concatenatedStrings, b)
}

func main() {

	fmt.Println(areRotations("AACD", "ACDA"))
	fmt.Println(areRotations("AACD", "AADC"))
}

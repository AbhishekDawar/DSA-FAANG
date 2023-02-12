package main

import (
	"fmt"
	"os"
	"os/exec"
	"runtime"
)

func CallClear() {
	var clear = make(map[string]func())
	clear["windows"] = func() {
		cmd := exec.Command("cmd", "/c", "cls")
		cmd.Stdout = os.Stdout
		cmd.Run()
	}
	value, _ := clear[runtime.GOOS]
	value()
}

func binarySearch(n int, arr []int) bool {

	low := 0
	high := len(arr) - 1

	for low <= high {
		median := low + (high-low)/2
		if arr[median] < n {
			low = median + 1
		} else {
			high = median - 1
		}
	}

	if low == len(arr) || arr[low] != n {
		return false
	}

	return true
}

func main() {
	CallClear()
	items := []int{1, 2, 9, 20, 31}
	fmt.Println(binarySearch(9, items))
	fmt.Println("Abhishek")
}

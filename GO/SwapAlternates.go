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

func swapAlternates(n int, arr []int) bool {

	 for(i:= 0;i<n;i++){

	 }
	 

	return true
}

func main() {
	CallClear()
	items := []int{1, 2, 9, 20, 31}
	fmt.Println(binarySearch(9, items))
	fmt.Println("Abhishek")
}

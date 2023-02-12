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

func searchRange(nums []int, target int) []int {
	ans := []int{-1, -1}
	ans[0] = Position(nums, target, true)
	if ans[0] != -1 {
		ans[1] = Position(nums, target, false)
	}
	return ans
}

func Position(nums []int, target int, isStartIndex bool) int {
	var start, end, ans int = 0, len(nums) - 1, -1
	for start <= end {
		mid := start + (end-start)/2
		if target < nums[mid] {
			end = mid - 1
		} else if target > nums[mid] {
			start = mid + 1
		} else {
			//potential ans;
			ans = mid
			if isStartIndex {
				end = mid - 1
			} else {
				start = mid + 1
			}
		}
	}
	return ans
}
func main() {
	CallClear()
	items := []int{2, 2}
	target := 3
	fmt.Println(searchRange(items, target))

}

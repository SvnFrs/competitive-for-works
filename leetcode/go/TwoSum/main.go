package main

func main() {
}
func twoSum(nums []int, target int) []int {
	var newArr []int
	for i := 0; i < len(nums); i++ {
		for j := len(nums) - 1; j > i; j-- {
			// if nums[i] <= target && nums[j] <= target {
			if nums[i]+nums[j] == target {
				newArr = []int{i, j}
				break
			}
			// }
		}
	}
	return newArr
}

package main

func main() {
}
func isPalindrome(x int) bool {
	reversed := 0
	for i := x; i > 0; i /= 10 {
		reversed = reversed*10 + i%10
	}
	return reversed == x
}

#include <stdio.h>
int factorial(int n){
	if (n == 1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
int main() {
	int n, fact;
	printf("Enter a number to find the factorial: ");
	scanf("%d", &n);
	fact = factorial(n);
	printf("The factorial of %d is %d\n",n, fact);
	return 0;
}
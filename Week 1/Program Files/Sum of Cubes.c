#include <stdio.h>
int main(){
	int n;
	int sum=0;
	printf("Enter the number of numbers: ");
	scanf("%d", &n);
	for(int i =n;i>0;i--){
		sum+=i*i*i;
	}
	printf("The sum of cubes of first %d natural numbers is %d\n", n, sum);
	return 0;
}
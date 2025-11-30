#include <stdio.h>
int Sum(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is: %d\n", n, Sum(n));

    return 0;
}

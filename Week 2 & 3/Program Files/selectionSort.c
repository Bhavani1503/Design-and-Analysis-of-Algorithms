#include <stdio.h>

void selectionSort(int a[], int n) {
    for(int i = 0; i < n-1; i++) {
        int min = i;
        for(int j = i+1; j < n; j++)
            if(a[j] < a[min]) min = j;

        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    selectionSort(a, n);

    printf("Sorted: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}


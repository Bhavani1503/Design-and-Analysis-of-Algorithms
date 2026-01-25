//CH.SC.U4CSE24120
#include <stdio.h>
#include <stdlib.h>
int Partition(int a[], int low, int high, int choice) {
    int pivotIndex;
    switch (choice) {
        case 1:
            pivotIndex = low;
            break;
        case 2:
            pivotIndex = high;
            break;
        case 3:
            pivotIndex = low + rand() % (high - low + 1);
            break;
        default:
            pivotIndex = low;
    }
    int temp = a[low];
    a[low] = a[pivotIndex];
    a[pivotIndex] = temp;
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    while (1) {
        while (i <= high && a[i] <= pivot)
            i++;
        while (a[j] > pivot)
            j--;
        if (i >= j)
            break;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void quickSort(int a[], int low, int high, int choice) {
    if (low < high) {
        int p = Partition(a, low, high, choice);
        quickSort(a, low, p - 1, choice);
        quickSort(a, p + 1, high, choice);
    }
}
int main() {
    int a[] = {157, 110, 147, 122, 111, 149, 151, 141, 123, 112, 117, 133};
    int n = sizeof(a) / sizeof(a[0]);
    int choice;
    printf("Choose Pivot Type (Partition):\n");
    printf("1. First element\n");
    printf("2. Last element\n");
    printf("3. Random element\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    quickSort(a, 0, n - 1, choice);
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}



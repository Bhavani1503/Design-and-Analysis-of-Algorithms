#include <stdio.h>
#include <stdlib.h>
struct Node {
    float data;
    struct Node *next;
};
void bucketSort(float arr[], int n) {
    struct Node *b[n];
    for(int i = 0; i < n; i++) b[i] = NULL;
    for(int i = 0; i < n; i++) {
        int idx = arr[i] * n;
        struct Node *newNode = malloc(sizeof(struct Node));
        newNode->data = arr[i];
        newNode->next = b[idx];
        b[idx] = newNode;
    }
    for(int i = 0; i < n; i++)
        for(struct Node *p = b[i]; p && p->next; p = p->next)
            for(struct Node *q = p->next; q; q = q->next)
                if(p->data > q->data) {
                    float t = p->data; p->data = q->data; q->data = t;
                }
    int k = 0;
    for(int i = 0; i < n; i++)
        for(struct Node *p = b[i]; p; p = p->next)
            arr[k++] = p->data;
}
int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    float arr[n];
    printf("Enter float elements (0 to 1): ");
    for(int i = 0; i < n; i++) scanf("%f", &arr[i]);
    bucketSort(arr, n);
    printf("Sorted: ");
    for(int i = 0; i < n; i++) printf("%.2f ", arr[i]);
    printf("\n");
}


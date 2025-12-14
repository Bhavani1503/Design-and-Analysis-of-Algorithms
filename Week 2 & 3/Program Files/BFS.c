#include <stdio.h>

#define MAX 100

int queue[MAX], front = 0, rear = 0, visited[MAX];

void enqueue(int x) { queue[rear++] = x; }
int dequeue() { return queue[front++]; }

void BFS(int graph[][MAX], int n, int start) {
    for(int i = 0; i < n; i++) visited[i] = 0;

    enqueue(start);
    visited[start] = 1;

    while(front != rear) {
        int v = dequeue();
        printf("%d ", v);

        for(int i = 0; i < n; i++)
            if(graph[v][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
    }
}

int main() {
    int n;
    printf("Number of nodes: ");
    scanf("%d", &n);

    int graph[MAX][MAX];
    printf("Enter adjacency matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    int start;
    printf("Enter starting node: ");
    scanf("%d", &start);

    printf("BFS: ");
    BFS(graph, n, start);
    printf("\n");
}


#include <stdio.h>

#define MAX 100

int visited[MAX];

void DFS(int graph[][MAX], int n, int v) {
    visited[v] = 1;
    printf("%d ", v);

    for(int i = 0; i < n; i++)
        if(graph[v][i] == 1 && !visited[i])
            DFS(graph, n, i);
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

    for(int i = 0; i < n; i++) visited[i] = 0;

    printf("DFS: ");
    DFS(graph, n, start);
    printf("\n");
}


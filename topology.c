#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int adj[MAX][MAX];
int in_degree[MAX];
int numvertices;

void add_edge(int u, int v) {
    adj[u][v] = 1;
    in_degree[v]++;
}

void topological_sort() {
    int queue[MAX], front = 0, rear = 0;
    int topo_order[MAX];
    int visited_nodes = 0;

    for (int i = 0; i < numvertices; i++) {
        if (in_degree[i] == 0) {
            queue[rear++] = i;
        }
    }

    while (front < rear) {
        int node = queue[front++];
        topo_order[visited_nodes++] = node;

        for (int i = 0; i < numvertices; i++) {
            if (adj[node][i]) {
                in_degree[i]--;
                if (in_degree[i] == 0) {
                    queue[rear++] = i;
                }
            }
        }
    }

    if (visited_nodes != numvertices) {
        printf("THE GRAPH HAS A CYCLE OR IS INVALID FOR TOPOLOGICAL SORTING \n");
    } else {
        printf("TOPOLOGICAL SORT ORDER: ");
        for (int i = 0; i < numvertices; i++) {
            printf("%d ", topo_order[i]);
        }
        printf("\n");
    }
}

int main() {
    int numEdges, u, v;

    printf("Enter number of vertices: ");
    scanf("%d", &numvertices);

    // Initialize adjacency matrix and in-degree array
    for (int i = 0; i < numvertices; i++) {
        for (int j = 0; j < numvertices; j++) {
            adj[i][j] = 0;  // Set all edges to 0 initially
        }
        in_degree[i] = 0;  // Set all in-degrees to 0 initially
    }

    printf("Enter number of edges: ");
    scanf("%d", &numEdges);

    printf("Enter edges (u v):\n");
    for (int i = 0; i < numEdges; i++) {
        scanf("%d %d", &u, &v);  // Read edge u -> v
        add_edge(u, v);  // Add the edge
    }

    topological_sort();

    return 0;
}


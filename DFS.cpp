#include <iostream>
using namespace std;

int g[10][10], visited[10], n;

void DFS(int v) {
    cout << v << " ";
    visited[v] = 1;

    for(int i=0; i<n; i++) {
        if(g[v][i] == 1 && visited[i] == 0)
            DFS(i);
    }
}

int main() {
    int e;
    cin >> n >> e;

    for(int i=0; i<e; i++) {
        int u, v;
        cin >> u >> v;
        g[u][v] = g[v][u] = 1;
    }

    int start;
    cin >> start;

    cout << "DFS: ";
    DFS(start);

    return 0;
}
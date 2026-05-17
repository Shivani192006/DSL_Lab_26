#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    int g[10][10] = {0};

    for(int i=0; i<e; i++) {
        int u, v;
        cin >> u >> v;
        g[u][v] = g[v][u] = 1;
    }

    int visited[10] = {0};
    queue<int> q;

    int start;
    cin >> start;

    visited[start] = 1;
    q.push(start);

    cout << "BFS: ";

    while(!q.empty()) {
        int v = q.front();
        q.pop();

        cout << v << " ";

        for(int i=0; i<n; i++) {
            if(g[v][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}
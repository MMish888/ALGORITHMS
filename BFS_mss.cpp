#include <bits/stdc++.h>

using namespace std;

void bfs(const vector<vector<int>>& graph, int start) {
    vector<bool> visited(graph.size(), false);
    queue<int> q;
    
    q.push(start);
    visited[start] = true;
    
    cout << "BFS traversal order: ";
    
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " ";
        
        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

int main() {
    vector<vector<int>> graph = {
        {1, 2},    // 0 - 1, 0 - 2
        {0, 3},    // 1 - 0, 1 - 3
        {0, 3},    // 2 - 0, 2 - 3
        {1, 2}     // 3 - 1, 3 - 2
    };
    
    bfs(graph, 0);  
    
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

void bfs(int cur, int** ms, int n, int* parent, int* dist, int& r){
    for(int i = 1; i <= n; ++i)
        parent[i] = dist[i] = -1;
    dist[cur] = parent[cur] = 0;
    queue<int> q;
    q.push(cur);
    int i;
    r = 0;
    while(!q.empty()){
        i = q.front();
        q.pop();
        for(int j = 1; j <= n; ++j){
            if(ms[i][j] > 0 && parent[j] == -1){
                q.push(j);
                dist[j] = dist[i] + 1;
                parent[j] = i;
                if(dist[j] > r)
                    r = dist[j];
            }

        }
    }
}

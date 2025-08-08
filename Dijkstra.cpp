#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int quantity;
    cin >> quantity;
    
    const int kInf = 2009000999;
    
    for (int i = 0; i < quantity; i++) {
        int quan_v, weights;
        cin >> quan_v >> weights;
        
        vector<vector<pair<int, int>>> graph(quan_v);
        vector<int> dist(quan_v, kInf);
        
        for (int j = 0; j < weights; j++) {
            int start, end, weight;
            cin >> start >> end >> weight;
            graph[start].emplace_back(end, weight);
            graph[end].emplace_back(start, weight);
        }
        
        int now;
        cin >> now;
        dist[now] = 0;
        
        priority_queue<pair<int, int>> pr_q;
        pr_q.push({0, now});
        
        while (!pr_q.empty()) {
            int vertex = pr_q.top().second;
            int cur_dist = -pr_q.top().first;
            pr_q.pop();
            
            if (cur_dist > dist[vertex]) {
                continue;
            }
            
            for (const auto& edge : graph[vertex]) {
                int to = edge.first;
                int len = edge.second;
                
                if (dist[vertex] + len < dist[to]) {
                    dist[to] = dist[vertex] + len;
                    pr_q.push({-dist[to], to});
                }
            }
        }
        
        for (int j = 0; j < quan_v; j++) {
            cout << dist[j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

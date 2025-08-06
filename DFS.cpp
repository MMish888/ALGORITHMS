void dfs(int cur, int n, int** ms, int* parent){
    int i = cur;
    for(int j = 1; j <= n; j++){
        if(ms[i][j] > 0 && parent[j] == -1){
            parent[j] = i;
            dfs(j, n, ms, parent);
        }
    }
    cout << cur << " ";
}

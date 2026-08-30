class Solution {
public:

    void bfs(vector<vector<int>>& adj, int s, vector<bool>& visited){
        queue<int> q;
        visited[s] = true;
        q.push(s);

        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(auto x: adj[u]){
                if(visited[x] == false){
                    visited[x] =true;
                    q.push(x);
                }
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto x: edges){
            int u, v;
            u = x[0];
            v = x[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> visited(n, false);
        int cnt =0;
        for(int i = 0; i < n; i++){
            if(visited[i] == false){
                cnt++;
                bfs(adj, i, visited);
            }
        }
        return cnt;
    }
};

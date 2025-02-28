vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        // Code here
        int n=adj.size();
        vector<int>vis(n,0);
        vis[0]=1;
        queue<int>que;
        que.push(0);
        vector<int>bfs;
        while(!que.empty()){
            int node=que.front();
            que.pop();
            bfs.push_back(node);
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    que.push(it);
                }
            }
        }
        return bfs;
    }

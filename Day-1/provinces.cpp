void dfs(int node,vector<int>adj[],int vis[]){
      vis[node]=1;
      for(auto it:adj[node]){
          if(!vis[it])dfs(it,adj,vis);
      }
  }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<int>adjLs[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1 && i!=j){
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }
        int vis[V]={0};
        int cnt =0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,adjLs,vis);
            }
        }
        return cnt;
    }

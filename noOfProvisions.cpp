void dfs(int node,vector<int> adjL[],vector<int> &vis){
            vis[node]=1;
            for(auto i :adjL[node]){
                if(!vis[i])
                dfs(i,adjL,vis);
            }
            
        }
int findCircleNum(vector<vector<int>>& isConnected) {
    int n=isConnected.size();
    vector<int>adjL[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(isConnected[i][j]==1 && i!=j){
                adjL[i].push_back(j);
                adjL[j].push_back(i);
            }
        }
    }
    vector<int>vis(n,0);
    int c=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            c++;
            dfs(i,adjL,vis);
        }
    }
    return c;
}

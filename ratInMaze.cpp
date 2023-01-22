#include <bits/stdc++.h> 
void solve (int i, int j, vector<vector<int>> &arr, int n, vector<string> &ans, string move, vector<vector<int>> &vis){
    
    if(i==n-1 && j==n-1){
        ans.push_back(move);
        return;
    }
    
    vis[i][j]=1;
    
    //down
    if(i+1 < n && !vis[i+1][j] && arr[i+1][j]==1){
        solve(i+1, j, arr, n, ans, move+'D', vis);
     }
    
    //left
     if(j-1 >= 0 && !vis[i][j-1] && arr[i][j-1]==1){
        solve(i, j-1, arr, n, ans, move+'L', vis);
     }
    
    //right
     if(j+1 < n && !vis[i][j+1] && arr[i][j+1]==1){
        solve(i, j+1, arr, n, ans, move+'R', vis);
     }
    
    //up
     if(i-1 >= 0 && !vis[i-1][j] && arr[i-1][j]==1){
        solve(i-1, j, arr, n, ans, move+'U', vis);
     }
   vis[i][j]=0;
}
vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    vector<string> ans;
    
    vector< vector<int>> vis(n, vector<int>(n,0));
    
    if(arr[0][0]==1) solve(0,0,arr,n,ans, "", vis);
    
    return ans;
}

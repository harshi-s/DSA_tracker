    int dp[1005][1005];
    public:
    int solve(int ind, int weight, int wt[], int val[], int n, int dp[1005][1005]){
        
        if(weight==0 || ind == n) return 0;
        int incl=0;
        
        if(dp[ind][weight] != -1) return dp[ind][weight];
        
        if(weight - wt[ind] >= 0)
        
        incl=solve(ind+1, weight - wt[ind], wt, val, n, dp) + val[ind];
        
        int excl=solve(ind+1, weight, wt, val, n, dp) + 0;
        
        int ans=max(incl, excl);
        return dp[ind][weight]=ans;
        
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        
        memset(dp, -1, sizeof(dp));
       return solve(0, W, wt, val, n, dp);
    }

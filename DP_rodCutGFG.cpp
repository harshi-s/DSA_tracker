int dp[1005];
  public:
    int solve(int len, vector<int> &prices) {
       if(len==0) return 0;
       
       if(dp[len] != -1) return dp[len];
       
        int ans=0;
        for(int lenToCut=1; lenToCut<=prices.size(); lenToCut++)
        {
            
            if(len-lenToCut >= 0)
            ans=max(ans, solve(len-lenToCut, prices)+prices[lenToCut-1]);
            
        }
        return dp[len]=ans;
    }
    int cutRod(int price[], int n) {
         memset(dp, -1, sizeof(dp));
       
        vector<int> prices(price, price+n);
      
        return solve(n, prices);
    }

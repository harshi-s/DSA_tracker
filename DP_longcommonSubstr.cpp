    int solve(string a, string b, int n, int m){
        
    int dp[n + 1][m + 1];
    
    int ans = 0; 
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {

            if (i == 0 || j == 0)
                dp[i][j] = 0;
 
            else if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                ans = max(ans, dp[i][j]);
            }
            else
                dp[i][j] = 0;
        }
    }
    return ans;
    }

    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
       int dp[n + 1][m + 1];
       return solve(S1, S2, n, m);
    }

class Solution {
public:
    int lis(int i, int j, vector<int> &a, int n, vector<vector<int>> &dp){

        if(i == n) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        int incl=0;
        if(j==0 || a[i] > a[j-1])
                        incl=1+lis(i+1, i+1, a, n, dp);

        int excl=lis(i+1, j, a, n, dp);

        int ans=max(incl, excl);
        return dp[i][j]=ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
      
        return lis(0, 0, nums, n, dp);
    }
};

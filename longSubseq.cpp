class Solution {
public:
    int dp[2515];
    int list(int i, vector<int> &a){
        if(dp[i]!= -1) return dp[i];
        int ans=1;
        for(int j=0; j<i; j++){
            if(a[i] > a[j]){
                ans=max(ans, list(j,a)+1);
            }
        }
        return dp[i]=ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            ans=max(ans, list(i, nums));
        }
        return ans;
    }
};

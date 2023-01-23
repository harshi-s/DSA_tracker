class Solution {
    int dp[10010];
public:
    int func(int amt, vector<int> &coins){
        if(amt==0) return 0;
        if(dp[amt] != -1) return dp[amt];
int ans=INT_MAX;
        for(int coin : coins){
            if(amt-coin >=0)
            ans=min(ans+0LL, func(amt-coin, coins)+1LL);
        }
        return dp[amt]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp, -1, sizeof(dp));
        int ans=func(amount, coins);
        if(ans==INT_MAX) return -1;
        else return ans;
    }
};

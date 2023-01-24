#include<cstring>

int dp[10010];
int solve(vector<int> &num, int x){

    if(x==0) return 0;
    if(x<0) return INT_MAX;
if(dp[x] != -1) return dp[x];
  
    int mini=INT_MAX;

    for(int i=0; i<num.size(); i++){
        int ans=solve(num, x-num[i]);
        if(ans != INT_MAX){
            mini=min(mini, ans+1);
        }
    }
    return dp[x]=mini;
}


int minimumElements(vector<int> &num, int x)
{
    memset(dp, -1, sizeof(dp));
    int ans=solve(num, x);
    if(ans==INT_MAX) return -1;
    else return ans;
}

class Solution {
    int dp[1005][1005];
public:
    int lcs(int n1, int n2, string &text1, string &text2){
        if(n1 < 0 || n2 < 0) return 0;

        if(dp[n1][n2] != -1) return dp[n1][n2];

        int ans=lcs(n1-1, n2, text1, text2);
        ans=max(ans, lcs(n1, n2-1, text1, text2));
        ans=max(ans, lcs(n1-1, n2-1, text1, text2)+(text1[n1]==text2[n2]));

        return dp[n1][n2]=ans;
    }
    int longestCommonSubsequence(string text1, string text2) {
        
        memset(dp, -1, sizeof(dp));
        return lcs(text1.size()-1, text2.size()-1, text1, text2);
    }
};

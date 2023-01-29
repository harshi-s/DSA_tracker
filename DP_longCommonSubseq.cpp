class Solution {
    int dp[1005][1005];
public:
    int lcs(int n1, int n2, string &text1, string &text2){
        if(n1 ==text1.size()) return 0;
        if(n2 ==text2.size()) return 0;

        if(dp[n1][n2] != -1) return dp[n1][n2];

        int ans=0;
       if(text1[n1]==text2[n2]){
          ans= 1+lcs(n1+1, n2+1, text1, text2);
       }
       else{
          ans=max(lcs(n1+1, n2, text1, text2), lcs(n1, n2+1, text1, text2)); 
       }

        return dp[n1][n2]=ans;
    }
    int longestCommonSubsequence(string text1, string text2) {
        
        memset(dp, -1, sizeof(dp));
        return lcs(0, 0, text1, text2);
    }
};

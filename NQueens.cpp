class Solution {
public:
    void solve(int col, vector<string> &board, vector<vector<string>> &ans, vector<int> &lowerD, vector<int> &upperD, vector<int> &leftRow, int n){

if(col==n){
    ans.push_back(board);
    return;
}
for(int row=0; row<n; row++){
    if(leftRow[row]==0 && lowerD[col+row]==0 && upperD[n-1 +col-row]==0){

        board[row][col]='Q';
        leftRow[row]=1;
        lowerD[col+row]=1;
        upperD[n-1 +col-row]=1;
        solve(col+1, board, ans, lowerD, upperD, leftRow, n);

        board[row][col]='.';
        leftRow[row]=0;
        lowerD[col+row]=0;
        upperD[n-1 +col-row]=0;

    }
}
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for(int i=0; i<n; i++){
            board[i]=s;
        }
        vector<int> leftRow(n,0);
        vector<int> lowerD(2*n-1,0);
        vector<int> upperD(2*n-1,0);

        solve(0, board, ans, lowerD, upperD, leftRow, n);
        return ans;

    }
};

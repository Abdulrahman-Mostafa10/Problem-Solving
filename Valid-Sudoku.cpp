class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<int>> rows,cols;
        map<pair<int,int>,unordered_set<int>> sqrs;

        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                if(board[i][j]=='.') continue;
                pair<int,int> sqrsKey = {i/3,j/3};
                if(rows[i].count(board[i][j]) || cols[j].count(board[i][j]) || sqrs[sqrsKey].count(board[i][j]))
                    return false;
                rows[i].insert(board[i][j]),cols[j].insert(board[i][j]),sqrs[sqrsKey].insert(board[i][j]);
            }
        }
        return true;
    }
};

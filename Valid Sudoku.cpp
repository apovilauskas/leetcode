class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::unordered_map<int, std::unordered_set<char>> rows, cols;
        std::map<std::pair<int,int>, std::unordered_set<char>> box;
    
    for(int r=0; r<9; r++){
        for(int c=0; c<9; c++){
            if(board[r][c] == '.')continue;

            std::pair<int, int> boxkey = {r/3, c/3};

            if(rows[r].count(board[r][c]) || cols[c].count(board[r][c]) ||
            box[boxkey].count(board[r][c])){
                return false;
            }

            rows[r].insert(board[r][c]);
            cols[c].insert(board[r][c]);
            box[boxkey].insert(board[r][c]);
            }
        }
        return true;
    }
    
    };

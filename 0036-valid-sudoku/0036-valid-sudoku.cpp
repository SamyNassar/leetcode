class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int, unordered_set<int>> rows;
        map<int, unordered_set<int>> columns;
        map<pair<int, int>, unordered_set<int>> squares;

        for (int r = 0; r < 9; r++)
        {
            for (int c = 0; c < 9; c++)
            {
                if(board[r][c] == '.') {continue;}

                int curr = int(board[r][c]);
                
                if(rows[r].find(curr) != rows[r].end() || 
                columns[c].find(curr) != columns[c].end() ||
                squares[pair<int,int>(int(r/3), int(c/3))].find(curr) != squares[pair<int,int>(int(r/3), int(c/3))].end()){
                    return false;
                }
                rows[r].insert(curr);
                columns[c].insert(curr);
                squares[pair<int,int>(int(r/3), int(c/3))].insert(curr);

            }
        }
        return true;
    }
};
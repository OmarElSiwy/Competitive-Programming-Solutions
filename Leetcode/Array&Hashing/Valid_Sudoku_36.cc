class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> storage(27);
        int counter = 0;
        // rows and columns
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.' && storage[counter].count(board[i][j])) {return false;}
                storage[counter].insert(board[i][j]);
            }
            counter++;
        }
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[j][i] != '.' && storage[counter].count(board[j][i])) {return false;}
                storage[counter].insert(board[j][i]);
            }
            counter++;
        }
        
        vector<pair<int, int>> order = {{0, 0}, {3, 0}, {0, 3}, {3, 3}, {0, 6}, {3, 6}, {6, 6}, {6, 3}, {6, 0}};
        while (!order.empty()) {
            int x = order.back().first;
            int y = order.back().second;
            order.pop_back();
            for (int j = 0; j < 3; j++) {
                for (int z = 0; z < 3; z++) {
                    cout << x+j << " " << y+z << endl;
                    if (board[x+j][y+z] != '.' && storage[counter].count(board[x+j][y+z])) {return false;}
                    storage[counter].insert(board[x+j][y+z]);
                }
            }
            counter++;
        }
        
        return true;
    }
};
class Solution {
public:
    //separate function to verify Sudoku rules
    bool checker(vector<char> line)
    {
        sort(line.begin(), line.end());
        for (int i = line.size() - 1; i > 0 ; --i)
        {
            if (line[i] == '.')
            {
                break;
            }
            else if (line[i] == line[i - 1])
            {
                return false;
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        //check rows (horizontally)
        for (int i = 0; i < board.size(); ++i)
        {
            if (!checker(board[i]))
            {
                return false;
            }
        }

        //helper vector
        vector<char> temp;

        //check columns (vertically)
        for (int i = 0; i < board.size(); ++i)
        {
            temp.clear();
            for (int j = 0; j < board.size(); ++j)
            {
                temp.push_back(board[j][i]);
            }
            if (!checker(temp))
            {
                return false;
            }
        }

        //check squares (3x3)
        for (int i = 0; i < board.size(); i += 3 )
        {
            for (int j = 0; j < board.size(); j += 3)
            {
                temp.clear();
                for (int l = 0; l < 3; ++l)
                {
                    for (int k = 0; k < 3; ++k)
                    {
                        temp.push_back(board[i + l][j + k]);
                    }
                }
                if (!checker(temp))
                {
                    return false;
                }
            }
        }
        return true;
    }
};
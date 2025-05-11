//Mod1 Lab2 C++
//sudoku

#include <iostream>
#include <vector>
#include <unordered_set>

bool isValidSudoku(const std::vector<std::vector<char>>& board) {
    for (int i = 0; i < 9; ++i) {
        std::unordered_set<char> rowSet;
        std::unordered_set<char> colSet;
        std::unordered_set<char> boxSet;

        for (int j = 0; j < 9; ++j) {
            char value = board[i][j];
            
            // Check rows
            if (value != '.' && !rowSet.insert(value).second) {
                return false;
            }

            // Check columns
            value = board[j][i];
            if (value != '.' && !colSet.insert(value).second) {
                return false;
            }

            // Check 3x3 boxes
            int rowIndex = 3 * (i / 3);
            int colIndex = 3 * (i % 3);
            value = board[rowIndex + j / 3][colIndex + j % 3];
            if (value != '.' && !boxSet.insert(value).second) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    std::vector<std::vector<char>> sudokuBoard(9, std::vector<char>(9));
    std::string inputLine;
    std::cin >> inputLine;

    for (int i = 0; i < 81; ++i) {
        sudokuBoard[i / 9][i % 9] = inputLine[i];
    }

    bool result = isValidSudoku(sudokuBoard);

    if (result) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
bool check_win(char** board, int r, int c) {

    // Check rows for a win

    for (int i = 0; i < r; i++) {

        for (int j = 0; j <= c - 4; j++) {

            if (board[i][j] != '_' && board[i][j] == board[i][j+1] && board[i][j] == board[i][j+2] && board[i][j] == board[i][j+3]) {

                return true;

            }

        }

    }



    // Check columns for a win

    for (int i = 0; i <= r - 4; i++) {

        for (int j = 0; j < c; j++) {

            if (board[i][j] != '_' && board[i][j] == board[i+1][j] && board[i][j] == board[i+2][j] && board[i][j] == board[i+3][j]) {

                return true;

            }

        }

    }



    // Check diagonals (top-left to bottom-right) for a win

    for (int i = 0; i <= r - 4; i++) {

        for (int j = 0; j <= c - 4; j++) {

            if (board[i][j] != '_' && board[i][j] == board[i+1][j+1] && board[i][j] == board[i+2][j+2] && board[i][j] == board[i+3][j+3]) {

                return true;

            }

        }

    }



    // Check diagonals (top-right to bottom-left) for a win

    for (int i = 0; i <= r - 4; i++) {

        for (int j = 3; j < c; j++) {

            if (board[i][j] != '_' && board[i][j] == board[i+1][j-1] && board[i][j] == board[i+2][j-2] && board[i][j] == board[i+3][j-3]) {

                return true;

            }

        }

    }



    return false; // No win condition detected

}

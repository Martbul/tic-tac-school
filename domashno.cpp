#include <iostream>
using namespace std;

void print_board(char** board, int r, int c){
    for(int i=0; i < r; i++){

        for(int j=0; j<c; j++)
        {
            cout<<" "<<board[i][j];
        }
        cout<<endl;
    }
}

void fill_board(char** board, int r,int c){

    for(int i=0; i< r; i++){

        for(int j=0; j<c; j++){

            board[i][j] = '_';
        }
    }
}


void place_tac(char** board, bool player, int p1,int r, int c)
{
    int p2 = r-1;
    while(p2> 0)
    {
        if(board[p2][p1] =='_')
        {
            break;
        }
        p2--;

    }
    if(p2 >= 0)
    {
        if(player)
        {
            board[p2][p1] ='x';
        }
        else
        {
            board[p2][p1] = 'o';
        }


    }
}

bool check_win(char** board){
return false;
}

int main()
{
    int cols=7;
    int rows = 6;
    bool player=true;
    int p1;

    char** arr = new char*[rows];
    for(int i = 0; i< rows; i++)
    {
        arr[i] = new char[cols];
    }

    fill_board(arr,rows,cols);

    print_board(arr,rows,cols);

    while(check_win(arr)==false){
        player = true;
        cin >> p1;
        place_tac(arr, player, p1, rows, cols);
        print_board(arr, rows,cols);

         player = false;
        cin >> p1;
        place_tac(arr, player, p1, rows, cols);
        print_board(arr, rows,cols);
    }
}

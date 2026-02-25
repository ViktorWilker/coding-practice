#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char board[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
char currentPlayer = 'X';
char botcharacter = 'O';

void displayboard();
void hashpvp();
void hashpve();
void resetboard();
bool botmoves();
bool makemove(int position);
bool checkbotvictory();
bool checkvictory();
bool checkdraw();

int main()
{
    char reset;
    int gamemodechoose;

    do{
        system("cls");
        resetboard();

        cout<< "Welcome to HasGame!" << endl;
        cout<< "Choice game mode" << endl;
        cout<< "[1] PvP   [2] PvE" << endl;
        cin>> gamemodechoose;

        if(gamemodechoose == 1){
            hashpvp();
        }
        else
        {
            hashpve();
        }

        cout<< "\nWould you like to play again?[s/n]" << endl;
        cin>> reset;

    }while(reset == 's' || reset == 'S');
 

    return 0;
}

void displayboard(){
    system("cls");

    cout<< "Hash Game" << endl;
    cout<< "-------------" << endl;

    for(int l = 0; l < 3; l++)
    {
        cout<< " ";
        for(int c = 0; c < 3; c++)
        {
            cout<< board[l][c];
            if(c < 2)
            {
                cout<< " | ";
            }
        }
        cout<< endl;
    if(l < 2)
    {
        cout<< "---|---|---" << endl;
    }

    }

    cout<< endl;
}
void resetboard(){
    currentPlayer = 'X';
    
    for(int l = 0; l < 3; l++)
    {
        for(int c =0; c < 3; c++)
        {
            if(board[l][c] != ' ')
            {
                board[l][c] = ' ';
            }
        }
    }
}
void hashpvp(){
    int positionMove;
    bool validmove, gameover = false;

    while(gameover == false)
    {   
        displayboard();

        cout<< "player " << currentPlayer << " choose a number from your numeric keypad (1-9)" << endl;
        cin>> positionMove;
        validmove = makemove(positionMove);
        if(validmove)
        {
            if(checkvictory())
            {
                displayboard();
                cout<< "Congratulations!!, player " << currentPlayer << " is the winner" << endl;
                gameover = true;
            }
            else if(checkdraw())
            {
                displayboard();
                cout<< "a tie! there are no winners" << endl;
                gameover = true;
            }
            else
            {
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        }

    }
}
void hashpve(){

    int positionMove;
    bool validmove, gameover = false;

    cout<< "Press any character to be your character:";
    cin>> currentPlayer;

    while(gameover == false)
    {   
        displayboard();

        cout<< "player " << currentPlayer << " choose a number from your numeric keypad (1-9)" << endl;
        cin>> positionMove;
        validmove = makemove(positionMove);
        if(validmove)
        {
            if(checkvictory())
            {
                displayboard();
                cout<< "Congratulations!!, player " << currentPlayer << " is the winner" << endl;
                gameover = true;
            }
            else if(checkdraw())
            {
                displayboard();
                cout<< "a tie! there are no winners" << endl;
                gameover = true;
            }
            else
            {
                botmoves();
                if(checkbotvictory())
                {
                    displayboard();
                    cout<< "you lose for bot!!";
                    gameover = true;
                }

                else if(checkdraw())
                {
                    displayboard();
                    cout<< "a tie! there are no winners" << endl;
                    gameover = true;
                }
            }
        }

    }
    
}
bool botmoves(){

    srand(time(0));

    while(true){
    int randonrows = rand() % 3;
    int randoncolumns = rand() % 3;

    if(board[randonrows][randoncolumns] == ' ')
    {
        board[randonrows][randoncolumns] = botcharacter;
        return true;
    }

    }

}
bool makemove(int position){
    if(position < 1 || position > 9)
    {
        return false;
    }

    int rows = (position - 1) / 3;
    int columns =(position - 1) % 3;

    if(board[rows][columns] != 'X' && board[rows][columns] != 'O')
    {
        board[rows][columns] = currentPlayer;
        return true;
    }

    return false;
}
bool checkbotvictory(){
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] == botcharacter && board[i][1] == botcharacter && board[i][2] == botcharacter){
            return true;
        } 

        if(board[0][i] == botcharacter && board[1][i] == botcharacter && board[2][i] == botcharacter){
            return true;
        }
    }

    if(board[0][0] == botcharacter && board[1][1] == botcharacter && board[2][2] == botcharacter)
    {
        return true;
    }

    if(board[2][0] == botcharacter && board[1][1] == botcharacter && board[0][2] == botcharacter){
        return true;
    }

    return false;
}
bool checkvictory(){
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer){
            return true;
        } 

        if(board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer){
            return true;
        }
    }

    if(board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer)
    {
        return true;
    }

    if(board[2][0] == currentPlayer && board[1][1] == currentPlayer && board[0][2] == currentPlayer){
        return true;
    }

    return false;
}
bool checkdraw(){
    for(int l = 0; l < 3; l++)
    {
        for(int c = 0; c < 3; c++)
        {
            if(board[l][c] == ' '){
                return false;
            }
        }
    }

    return true;
}
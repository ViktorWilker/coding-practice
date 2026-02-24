#include <iostream>
#include <cstdlib>

using namespace std;

void tabuleiro()
{
    system("cls");
    
    cout << "  1   2   3" << endl;
    for(int i = 0; i < 3; i++)
    {
        cout<< i + 1 << "  ";
    }
}

int main()
{

    tabuleiro();




    return 0;
}
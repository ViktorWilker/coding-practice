#include <iostream>

using namespace std;

int main()
{

    string senhaDoCofre = "tv";

    string tamanhodaString = to_string(senhaDoCofre.length());

    int tamanhodaInt = stoi(tamanhodaString);

    cout<< tamanhodaInt;




    return 0;
}
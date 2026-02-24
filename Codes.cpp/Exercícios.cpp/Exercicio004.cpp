#include <iostream>

using namespace std;

int main()
{

    float Bi1, Bi2, Bi3, Bi4;
    float media;

    cout<< "Insira a nota do primeiro bimestre: \n";
    cin>> Bi1;
    cout<< "\nInsira a nota do segundo bimestre: \n";
    cin>> Bi2;
    cout<< "\nInsira a nota do terceiro bimestre: \n";
    cin>> Bi3;
    cout<< "\nInsira a nota do quarto bimestre: \n";
    cin>> Bi4;

    media = (Bi1+Bi2+Bi3+Bi4)/4;

    cout<< "Sua media anual e igual a: " << media;

    return 0;
}
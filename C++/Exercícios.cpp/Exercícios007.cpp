#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float Area, lado;

    cout<< "Digite o valor de um dos lados do quadrado:\n";
    cin>> lado;

    Area = pow(lado, 2);

    cout<< "A area do quadrado e igual a: "<< Area << ", o dobro desse valor sera " << Area * 2;



    return 0;
}
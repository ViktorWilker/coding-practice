#include <iostream>
#include <cmath>

#define pi 3.14

using namespace std;

int main()
{

    float raio, area;

    cout<< "Digite o valor do raio do circulo:\n";
    cin>> raio;

    area = pi * pow(raio, 2);

    cout<< "\n A area do circulo e igual a: " << area;
    return 0;
}
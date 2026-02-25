#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numeroSecreto;
    int maxTentativas = 5;
    int tentativas = 0;
    int numeroCorreto = 4;
    vector<int> chutesErrados;

    while (tentativas <= maxTentativas)
    {
        cout<< "!!Acerte o numero secreto!!\n";
        cout<< "Tentativas: ";

        for(int i = 0; i < chutesErrados.size(); i++)
        {
             cout<< chutesErrados[i] << " ";
        }

        cout<< endl;
        cin>> numeroSecreto;
        tentativas++;

        if (numeroSecreto == numeroCorreto)
        {
            cout<< "Parabens, voce acertou o numero secreto!\n";
            break;
        }
        else
        {
            cout<< "Numero errado, tente novamente\n;";
            chutesErrados.push_back(numeroSecreto);
        }
        if (tentativas == maxTentativas)
        {
            cout<< "Suas Chances acabaram";
        }
        
    }
    

    cout<< "Tentativas erradas: \n";

    for (int i : chutesErrados)
    {
        cout<< i << " ";
    }
    
    return 0;
}

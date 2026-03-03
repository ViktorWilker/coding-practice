#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;    

vector<string> listaDePalavrasSecretas;

void InicializarListadePalavrasSecretas()
{
    listaDePalavrasSecretas = {"programacao", "rosquinhas", "amor", "teste", "blabla"};
}

string EscolherPalavraAleatoria()
{
    srand(time(nullptr));
    
    if (listaDePalavrasSecretas.empty())
    {
        exit(1);
    }
    
    int indiceRandon = rand() % listaDePalavrasSecretas.size();
    string palavrasecreta = listaDePalavrasSecretas[indiceRandon];
    listaDePalavrasSecretas.erase(listaDePalavrasSecretas.begin() + indiceRandon);
    return palavrasecreta;
    
}   

void JogarForca()
{

    string palavraSecreta = EscolherPalavraAleatoria();
    string dicaSecreta = "Comida";
    string quantidadeDeLetras(palavraSecreta.length(),'_');
    string tamanhoString = to_string(palavraSecreta.length());
    string chute;
    int maxTentativas = stoi(tamanhoString) + 2;
    int tentativas = 0;
    int loop = 0;
    int nmrdeloops = 3;
    vector<int> palpitesErrados;
    char palpite;

    cout<< "!!Bem vindo ao Jogo Da Forca!!\n";
    cout<< "!!Descubra  a palavra secreta!!\n";

    while (tentativas < maxTentativas)
    {
        cout<< "\nDica: " << dicaSecreta << ">";
        cout<< "\nPalavra: " << quantidadeDeLetras;
        cout<< "\nTentativas restantes: " << maxTentativas - tentativas;
        cout<< "\nLetras erradas: ";

        for (char letrasErradas : palpitesErrados)
        {
            cout<< letrasErradas << " ";
        }
        
        cout<< endl;
        cout << "\nDigite uma letra ou chute a palavra completa (digite '*' para chutar a palavra): \n";
        cin >> palpite;

        if (palpite == '*')
        {
            cout << "\nChute a palavra completa: ";
            cin >> chute;

            if (chute == palavraSecreta)
            {
                cout << "\n\nParabens!! Voce acertou a palavra secreta!!";
                break;
            }
            else
            {
                cout << "\nPalavra incorreta. Continue adivinhando as letras.\n";
                continue;
            }
        }

        bool letrasRepetidas = false;
        for (char letraRepetida : palpitesErrados)
        {
            if (letraRepetida == palpite)
            {
                letrasRepetidas = true;
                break;
            }
            
        }
        
        if (letrasRepetidas)
        {
            cout<< "\nvoce ja tentou essa letra!\n";
            continue;
        }
        
        bool letrasCorretas = false;
        for (int i = 0; i < palavraSecreta.length(); i++)
        {
            if (palavraSecreta[i] == palpite)
            {
                quantidadeDeLetras[i] = palpite;
                letrasCorretas = true;
            }
            
        }
        
        if (letrasCorretas)
        {
            cout<< "\nLetra correta\n";
        }
        else
        {
            cout<< "\nLetra incorreta\n";
            palpitesErrados.push_back(palpite);
        }

        tentativas++;
       
        if (quantidadeDeLetras == palavraSecreta)
        {
            cout<< "\n\nParabens!! voce encontrou a palavra secreta!!";
            break;
        }

        loop++;
        if (loop == nmrdeloops)
        {
            loop = 0;
            system("cls");
        }
    }

    if (tentativas == maxTentativas)
        {
            cout<< "Acabou suas chances :(";
            cout<< "\n A palavra correta era: " << palavraSecreta;
        }



}

int main()
{   
    InicializarListadePalavrasSecretas();
    char jogarNovamente;
    do
    {   
        system("cls");
        JogarForca();
        cout<< "\n\nGostaria de jogar novamente[s/n]\n";
        cin>> jogarNovamente;

        if (listaDePalavrasSecretas.empty() && jogarNovamente == 'S' || jogarNovamente == 's')
        {
            InicializarListadePalavrasSecretas;
            continue;
        }
        
        
    } while (jogarNovamente == 's' || jogarNovamente == 'S');

        cout<< "Obrigado de Jogar!!";
    
    return 0;
}


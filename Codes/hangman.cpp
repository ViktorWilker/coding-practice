#include <iostream>
#include <ctime>
#include <vector>
#include <cstdlib>

using namespace std;

vector<string> listOfWords;

string initializeList();
string randonWord();
void hangman();

int main()
{
    
    char opc;
   do
   {    
        system("cls");
        initializeList();
        
        hangman();

        cout<< "Gostaria de jogar novamente[s/n]\n";
        cin>> opc;

   } while (opc == 's' || opc == 'S');
   
    cout<< "obrigado por jogar";

    return 0;
}

string initializeList()
{
    srand(time(nullptr));
    int nTheme = rand() % 3;
    string currentTheme;

    if(nTheme == 0)
    {
        listOfWords = {"rosquinha","pizza","banana","hamburguer","pudim"};
        currentTheme = "comidas";
        return currentTheme;
    }
    else if(nTheme == 1)
    {
        listOfWords = {"lhama","gato","macaco","coelho","tubarão"};
        currentTheme = "animais";
        return currentTheme;
    }
    else
    {
        listOfWords = {"carregador","lampada","ventilador","anel","lanterna"};
        currentTheme = "objetos";
        return currentTheme;
    }
}
string randonWord()
{
    srand(time(nullptr));
    if(listOfWords.empty())
    {
        exit(1);
    }

    int indicerandon = rand() % listOfWords.size();
    string currentWord = listOfWords[indicerandon];
    listOfWords.erase(listOfWords.begin() + indicerandon);
    return currentWord;
}
void hangman()
{
    string secretWord = randonWord();
    string wordlength(secretWord.length(), '_');
    string tip = initializeList();
    string kick;
    int attemptsMax = secretWord.length() + 2;
    int attempts = 0;
    int loop = 0;
    int loopmax = 3;
    char letter;
    vector<char> wrongLetters;

    cout<< "!!Bem vindo ao Jogo Da Forca!!\n";
    cout<< "!!Descubra  a palavra secreta!!\n";
    

    while (attempts < attemptsMax)
    {
        cout<< "\nPalvra: " << wordlength;
        cout<< "\nTema: " << tip;
        cout<< "\nTentativas: " << attemptsMax - attempts;
        cout<< "\nLetras incorretas: ";
        for(char i : wrongLetters)
        {
            cout<< i << " ";
        }

        cout<< endl;
        cout<< "Digite uma letra (ou pressione '*' para chutar uma palavra)" << endl;
        cin>> letter;

        if (letter == '*')
        {
            cout<< endl;
            cout<< "chute uma palavra: ";
            cin>> kick;
            if(kick == secretWord)
            {
                cout<< "\nparabens! voce acertou a palavra secreta!\n\n";
                break;
            }
            else
            {
                cout<< "\nchute incorreto!\n";
                continue;
            }
        }

        bool repeatedLetters = false;
        for(char x : wrongLetters)
        {
            if(letter == x)
            {
                repeatedLetters = true;
                break;
            }
        }

        if(repeatedLetters)
        {
            cout<< "\n\nvoce ja tentou esta letra!!\n\n";
            continue;
        }

        bool correctLetters = false;
        for(int y = 0; y < secretWord.length(); y++)
        {
            if(letter == secretWord[y])
            {
                wordlength[y] = letter;
                correctLetters = true;
            }
        }

        if(correctLetters)
        {
            cout<< "\nvoce encontrou uma letra!\n";
        }
        else
        {
            cout<< "\nletra incorreta!\n";
            wrongLetters.push_back(letter);
        }

        attempts++;

        if(wordlength == secretWord)
        {
            cout<< "\nparabens!! voce encontrou a palavra secreta!!\n";
            break;
        }

        loop++;
        if(loop == loopmax)
        {
            loop = 0;
            system("cls");
        }

        if (attempts == attemptsMax)
        {
            cout<< "\nAcabou suas chances :(";
            cout<< "\n A palavra correta era: " << secretWord;
        }

        
    }

    
   
}


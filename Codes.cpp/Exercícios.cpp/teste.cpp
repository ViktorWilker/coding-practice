#include <iostream>
#include <windows.h>

using namespace std;

void monitorAndClearTerminal() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    int maxRows = 25; // Defina o número máximo de linhas antes de limpar o terminal

    while (true) {
        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
        int rows = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1;

        if (rows >= maxRows) {
            system("cls"); // Limpa o terminal usando o comando do sistema "cls"
        }

        // Aqui você pode adicionar mais conteúdo ao terminal, se desejar
        // Exemplo: std::cout << "Nova linha de conteúdo..." << std::endl;

        Sleep(1000); // Aguarda por um segundo antes de verificar novamente
    }
}

int main() 
{
    monitorAndClearTerminal();

    int nmr = 5;

    for (int i = 0; i < nmr; i++)
    {
        cout<< i << "\n";
    }

    return 0;
}

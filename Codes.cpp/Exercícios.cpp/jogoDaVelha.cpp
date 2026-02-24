#include <iostream>
#include <cstdlib>

using namespace std;

char tabuleiro[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
char jogadorAtual = 'X';

void exibirTabuleiro() {
    system("cls"); // Limpa a tela (para sistemas Windows)
    
    cout << "  1   2   3" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < 3; j++) {
            cout << tabuleiro[i][j];
            if (j < 2) {
                cout << " | ";
            }
        }
        cout << endl;
        if (i < 2) {
            cout << " ---|---|---" << endl;
        }
    }
    cout << endl;
}

bool fazerJogada(int linha, int coluna) {
    if (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == ' ') {
        tabuleiro[linha][coluna] = jogadorAtual;
        return true;
    }
    return false;
}

bool verificarVitoria() {
    // Verifica linhas, colunas e diagonais
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == jogadorAtual && tabuleiro[i][1] == jogadorAtual && tabuleiro[i][2] == jogadorAtual) {
            return true; // Linha
        }
        if (tabuleiro[0][i] == jogadorAtual && tabuleiro[1][i] == jogadorAtual && tabuleiro[2][i] == jogadorAtual) {
            return true; // Coluna
        }
    }
    if (tabuleiro[0][0] == jogadorAtual && tabuleiro[1][1] == jogadorAtual && tabuleiro[2][2] == jogadorAtual) {
        return true; // Diagonal principal
    }
    if (tabuleiro[0][2] == jogadorAtual && tabuleiro[1][1] == jogadorAtual && tabuleiro[2][0] == jogadorAtual) {
        return true; // Diagonal secundária
    }
    return false;
}

bool verificarEmpate() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int linha, coluna;
    bool jogadaValida, jogoAcabou = false;

    while (!jogoAcabou) {
        exibirTabuleiro();
        cout << "Jogador " << jogadorAtual << ", digite a linha (1, 2, 3) e coluna (1, 2, 3) da sua jogada: ";
        cin >> linha >> coluna;

        linha--; // Ajuste para usar índices de matriz (0 a 2)
        coluna--;

        jogadaValida = fazerJogada(linha, coluna);
        
        if (jogadaValida) {
            if (verificarVitoria()) {
                exibirTabuleiro();
                cout << "Jogador " << jogadorAtual << " venceu!" << endl;
                jogoAcabou = true;
            } else if (verificarEmpate()) {
                exibirTabuleiro();
                cout << "O jogo terminou em empate!" << endl;
                jogoAcabou = true;
            } else {
                jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
            }
        } else {
            cout << "Jogada inválida. Tente novamente." << endl;
        }
    }

    return 0;
}

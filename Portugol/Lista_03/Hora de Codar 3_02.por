programa {
  funcao inicio() {
    //2 - Escreva um algoritmo para ler 2 valores informados pelo usuário e enquanto o segundo valor informado for igual ou menor que ZERO, deve ser lido um novo valor, mas para a mesma variável. Ou seja, para o segundo valor não pode ser aceito o valor zero nem um valor negativo.O seu programa deve imprimir o resultado da divisão do primeiro valor lido pelo segundo valor e exibir o resultado ao usuário.

    real x,y = 0

    escreva("Insira o primeiro valor: ")
    leia(x)
    escreva("Insira o segundo valor: ")
    enquanto(y <= 0){
      leia(y)
      se(y <= 0){
        escreva("informe um valor válido: ")
      }
    }

    escreva("\n", x/y)
  }
}

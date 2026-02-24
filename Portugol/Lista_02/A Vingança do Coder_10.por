programa {
  funcao inicio() {
    //10. Tendo como entrada a altura e o gênero designado ao nascer (codificado da seguinte forma: 1: feminino - 2: masculino - ) de uma pessoa, construa um programa que calcule e imprima seu peso ideal, utilizando as seguintes fórmulas.
    real h
    inteiro g
    real p
    logico check = verdadeiro

    escreva("Digite sua altura em centímetros: ")
    leia(h)

    enquanto(check){
      escreva("Digite o número que corresponde ao seu gênero de nascimento: 1: Feminino - 2: Masculino\n")
      leia(g)
      se(g ==1 ou g == 2)
        {
          check = falso
        }senao{
          escreva("Digite uma opção válida!\n")
        }
    }

    se(g == 2){
      p = (72.7*h) - 58
      escreva(p)
    }senao{
      p = (62.1*h) - 44.7
      escreva(p) 
    }
  }
}

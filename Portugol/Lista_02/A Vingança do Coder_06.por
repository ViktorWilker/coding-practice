programa {
  funcao inicio() {
    // 6. Faça um programa que receba quatro valores informados pelo usuário, mas informe somente o primeiro, o último e o maior de todos eles (considere que todos os números informados serão diferentes)

    inteiro x[4]
    inteiro greater = -999

    para(inteiro i = 0; i < 4; i++){
      leia(x[i])
      se(x[i] > greater){
        greater = x[i]
      }
    }

    escreva("\nprimeiro número: ", x[0])
    escreva("\núltimo número: ", x[3])
    escreva("\nmaior número: ", greater)
  }
}

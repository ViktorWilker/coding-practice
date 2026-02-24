programa {
  funcao inicio() {
    //Faça um programa que leia 6 valores informados pelo usuário, calcule, exiba os números informados e escreva a média aritmética desses valores lidos.
    inteiro i
    real x = 0
    real nmrs[6]

    para(i = 0; i < 6; i++){
      leia(nmrs[i])
      x += nmrs[i]
    }

    escreva("Números informados: ")
    para(i = 0; i < 6; i++){
      escreva(nmrs[i], " | ")
    }

    escreva("\nMédia igual: ", x/6)

  }
}

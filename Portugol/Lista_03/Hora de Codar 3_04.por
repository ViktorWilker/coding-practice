programa {
  funcao inicio() {
    //4 - Faça um algoritmo que calcule e escreva a média aritmética dos números inteiros entre 15 (inclusive) e 100 (inclusive).

    inteiro x = 0
    inteiro cont = 0
    para(inteiro i = 15; i<=100; i++){
      x += i
      cont++
    }

    escreva(x/cont)

  }
}

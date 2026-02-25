programa {
  funcao inicio() {
    /*5 - Faça um algoritmo que calcule e escreva a média aritmética dos dois números inteiros informados pelo usuário e todos os números inteiros entre eles. Considere que o primeiro sempre será menor que o segundo. */

    inteiro x, y, cont = 0, s = 0
    leia(x)
    leia(y)

    para(inteiro i = x; i <= y; i++){
      s += i
      cont++
    }
    
    escreva(s/cont)
  }
}

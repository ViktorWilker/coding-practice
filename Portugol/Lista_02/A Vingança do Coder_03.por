programa {
  funcao inicio() {
    //3. Faça um programa para ler 3 valores (considere que não serão informados valores iguais) e escrever o maior deles.

    real h = -1
    inteiro i

    para(i = 0; i < 3; i++){
        inteiro xL
        leia(xL)
        se(xL > h){
          h = xL
        }
    }

    escreva(h)

  }
}

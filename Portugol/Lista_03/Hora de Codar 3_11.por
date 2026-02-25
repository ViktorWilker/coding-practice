programa {
  funcao inicio() {
    //11 - Escreva um programa para imprimir todas as tabuadas de 1 a N. N será informado pelo usuário.
    inteiro n 
    leia(n)

    para(inteiro i = 1; i <= n; i++){
      escreva("\n")
      para(inteiro j = 0;j <= 10; j++){
        escreva("\n",i, "x", j, "=", j*i)
      }
    }
  }
}

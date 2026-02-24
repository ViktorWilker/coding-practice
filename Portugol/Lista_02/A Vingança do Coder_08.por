programa {
  funcao inicio() {
    //8. Escreva um programa que calcule a média de quatro números informados pelo usuário, mas somente se esses números forem maiores que 0 e menores que 10. No final, se a média for maior que cinco o usuário receberá uma mensagem "Você passou no teste". Em qualquer outra situação, ele receberá uma mensagem de "tente novamente"

    real notas[4]
    real media = 0
    real x
    inteiro contador = 1

    para(inteiro i = 0; i < 4; i++){
      contador = 1
      enquanto(contador == 1){
        leia(x)
          se(x > 0 e x < 10)
          {notas[i] = x
            media += notas[i]
            contador = 0}
    }
  } 

  media /= 2
  se(media > 5){
    escreva("Você passou no teste")
  }senao{escreva("tente novamente")}

}
}

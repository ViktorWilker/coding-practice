programa {
  funcao inicio() {
    //9. Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês em que ela nasceu).
    inteiro x
    leia(x)

    se(x < 2009){
      escreva("Pode votar")
    }senao{
      escreva("Não pode votar")
    }
  }
}

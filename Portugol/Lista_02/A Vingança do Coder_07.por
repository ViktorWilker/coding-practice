programa {
  funcao inicio() {
    //7. Faça um programa que leia 6 números que o usuário vai informar. Todos os números lidos com valor inferior a 72 devem ser somados. Escreva o valor final da soma efetuada e também todos valores que o usuário informou.  

    real nmrs[6]
    real x = 0
    para(inteiro i = 0; i < 6; i++){
      leia(nmrs[i])
      se(nmrs[i] < 72){
        x += nmrs[i]
      }
    }

    escreva("Números inseridos: ", nmrs)
    escreva("\nsoma: ", x)

    
  }
}

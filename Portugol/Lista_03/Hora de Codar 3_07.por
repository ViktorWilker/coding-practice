programa {
  funcao inicio() {
    //7 - Escreva um algoritmo para ler as notas de avaliações de um aluno, calcule e imprima a média (simples) desse aluno. Só devem ser aceitos valores válidos durante a leitura (0 a 10) para cada nota. São 6 notas ao total. Caso o valor informado para qualquer uma das notas esteja fora do limite estabelecido, deve ser solicitado um novo valor ao usuário. 

    real nts[6]
    real media, total = 0

    para(inteiro i = 0; i < 6; i++){
        leia(nts[i])
      enquanto(nts[i] < 0 ou nts[i] > 10){
        leia(nts[i])
      }
      total += nts[i]
    }

    media = total/6
    escreva(media)

  }
}

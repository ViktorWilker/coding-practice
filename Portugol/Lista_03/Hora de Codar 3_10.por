programa {
  funcao inicio() {
     //10 - Escreva um programa em que o usuário informe 10 valores e escreva quantos desses valores lidos estão entre os números 24 e 42 (incluindo os valores 24 e 42) e quantos deles estão fora deste intervalo.

    inteiro n[10], v1 = 0, v2 = 0

      para(inteiro i = 0; i < 10; i++){
        leia(n[i])
        se(n[i] >= 24 e n[i] <= 42){
          v1++
        }senao{
          v2++
        }

      }

    escreva("\nQuantos estão dentro do intervalo: ", v1)
    escreva("\nQuantos estão fora do intervalo: ", v2)
  }
}

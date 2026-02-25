programa {
  funcao inicio() {
    //6 - Escreva um programa para ler 2 notas de um aluno, calcular e imprimir a média final. Considere que a nota de aprovação é 9,5. Logo após escrever a mensagem "Calcular a média de outro aluno Sim/Não?" e solicitar um resposta. Se a resposta for "S", o programa deve ser executado novamente, caso contrário deve ser encerrado exibindo a quantidade de alunos aprovados.

    real n1,n2
    inteiro nAlunos = 0
    logico repetir = verdadeiro
    enquanto(repetir){
      limpa()
      leia(n1)
      leia(n2)

      real media = (n1+n2)/2
      se(media >= 9.5){
        escreva("\nvocê passou, média: ", media)
        nAlunos++
      }senao{
        escreva("\nvocê não passou, média: ", media)
      } 

      escreva("\nCalcular a média de outro aluno Sim/Não?\n")
      caracter resp = 'x'
      
      enquanto(resp != 's' e resp != 'S' e resp != 'n' e resp != 'N'){
        leia(resp)
      }

      se(resp == 'n' ou resp == 'N'){
        repetir = falso
      }
    }

    escreva("Alunos aprovados: ", nAlunos)
  }
}

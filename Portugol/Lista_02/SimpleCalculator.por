programa {
  funcao inicio() {
    //11. Uma micro calculadora 
    //Escreva um programa para ler 2 valores inteiros informados pelo usuário e uma das seguintes operações a serem executadas (codificada da seguinte forma: 1. Adição, 2. Subtração, 3. Divisão, 4. Multiplicação). O programa deve calcular e escrever o resultado dessa operação sobre os dois valores lidos. 
    
    inteiro operacao
    real a,b

    escreva("Digite dois números: \n")
    leia(a)
    leia(b)

    escreva("Digite o número correspondente a operação que você deseja efetuar: \n")
    escreva("1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação\n")

    leia(operacao)

    escolha(operacao){
      caso 1:
      escreva(a,"+",b,"=", a+b)
      
      caso 2:
      escreva(a,"-",b,"=", a-b)

      caso 3:
      escreva(a,":",b,"=", a/b)

      caso 4:
      escreva(a,"x",b,"=", a*b)
    }





  }
}

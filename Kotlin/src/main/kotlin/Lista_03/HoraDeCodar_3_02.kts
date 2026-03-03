fun main(){
    //2 - Escreva um algoritmo para ler 2 valores informados pelo usuário e enquanto o segundo valor informado for igual ou menor que ZERO,
    // deve ser lido um novo valor, mas para a mesma variável. Ou seja, para o segundo valor não pode ser aceito o valor zero nem um valor negativo.
    //O seu programa deve imprimir o resultado da divisão do primeiro valor lido pelo segundo valor e exibir o resultado ao usuário.

    println("Insira o primeiro valor: ")
    var x = readln().toInt()
    println("Insira o segundo valor: ")
    var y = readln().toInt()

    while(y <= 0){
        y = readln().toInt()
        if(y <= 0){
            println("informe um valor válido: ")
        }
    }

    println(x/y)
}
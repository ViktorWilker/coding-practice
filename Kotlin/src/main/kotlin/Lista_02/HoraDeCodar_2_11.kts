fun main(){
    //11. Uma micro calculadora
    //Escreva um programa para ler 2 valores inteiros informados pelo usuário e uma das seguintes operações a
    // serem executadas (codificada da seguinte forma: 1. Adição, 2. Subtração, 3. Divisão, 4. Multiplicação).
    //O programa deve calcular e escrever o resultado dessa operação sobre os dois valores lidos.
    //
    //Observação: Considere que só serão lidos os valores 1, 2, 3 ou 4 para as operações

    var x = readln().toInt()
    var y = readln().toInt()
    var opc = 0

    println("Digite o número correspondente a operação que você deseja efetuar: ")
    println("1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação")

    opc = readln().toInt()
    when(opc){
        1 -> println("$x + $y = ${x + y}")
        2 -> println("$x - $y = ${x - y}")
        3 -> println("$x : $y = ${x / y}")
        4 -> println("$x * $y = ${x * y}")
    }

}

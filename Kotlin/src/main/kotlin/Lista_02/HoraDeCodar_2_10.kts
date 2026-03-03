fun main(){
    //10. Tendo como entrada a altura e o gênero designado ao nascer
    // (codificado da seguinte forma: 1: feminino - 2: masculino - ) de uma pessoa, construa um programa que calcule e imprima seu peso ideal, utilizando as seguintes fórmulas.

    var h = 0f
    var g = 0
    var p = 0f

    print("Digite sua idade: ")
    h = readln().toFloat()
    print("Digite o número correspondente ao seu gênero, 1:Feminino - 2:Masculino")
    g = readln().toInt()

    when(g){
        1 -> p = ((62.1 * h) - 44.7).toFloat()
        2 -> p = ((72.7 * h) - 44.7).toFloat()
    }

    println("Peso ideal: $p")
}
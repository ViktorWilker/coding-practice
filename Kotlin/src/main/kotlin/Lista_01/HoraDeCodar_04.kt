fun main(){
//Considerando a figura abaixo, escreva um programa para cada forma que calcule e exiba em tela cada uma de suas respectivas áreas.
// O usuário irá informar os valores de cada variável.

    println("Digite o número da figura que você deseja calcular a área:")
    println("1-Retângulo, 2-Quadrado, 3-Losângulo, 4-Trapézio, 5-Paralelogramo, 6-Triângulo, 7-Círculo")

    var opc = readln().toInt()
    when(opc){
        1 -> rectangle()
        2 -> squad()
        3 -> diamond()
        4 -> trapezius()
        5 -> parallelogram()
        6 -> triangle()
        7 -> circle()
    }
}

fun rectangle(){
    println("Digite o valor da base:")
    var b = readln().toFloat()
    println("Digite o valor de altura:")
    var h = readln().toFloat()

    println("A área do retângulo é: ${b * h}")
}
fun squad(){
    println("Insira o valor do lado: ")
    var l = readln().toFloat()
    println("A área do quadrado é ${l*l}")
}
fun diamond(){
    println("Insira o valor da diagonal maior: ")
    var dM = readln().toFloat()
    println("Insira o valor da diagonal menor: ")
    var dm = readln().toFloat()

    println("A área do losango é ${dM*dm/2}")
}
fun trapezius(){
    println("Insira o valor da base maior: ")
    var bM = readln().toFloat()
    println("Insira o valor da base menor: ")
    var bm = readln().toFloat()
    println("Insira o valor da altura: ")
    var h = readln().toFloat()

    println("A área do trapézio é ${((bm + bM)*h)/2}")
}
fun parallelogram(){
    println("Digite o valor da base:")
    var b = readln().toFloat()
    println("Digite o valor de altura:")
    var h = readln().toFloat()

    println("A área do paralelograma é: ${b * h}")
}
fun triangle(){
    println("Digite o valor da base:")
    var b = readln().toFloat()
    println("Digite o valor de altura:")
    var h = readln().toFloat()

    println("A área do triangulo é: ${b * h / 2}")

}
fun circle(){
    println("Digite o valor do raio:")
    var r = readln().toFloat()

    println("A área do círculo é ${(r*r * 3.14)}")
}
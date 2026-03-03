fun main(){
//5.  Faça um programa que leia 6 valores informados pelo usuário, calcule, exiba os números informados e escreva a média aritmética desses valores lidos.
    var x = mutableListOf<Float>()
    var plusX = 0f
    var Amount = 0

    for(i in 1..6){
        var linput = readln().toFloat()
        x.add(linput)
        plusX += linput
        Amount++

    }

    println("Números digitados: $x")
    println("Média aritimética: ${plusX/Amount}")
}
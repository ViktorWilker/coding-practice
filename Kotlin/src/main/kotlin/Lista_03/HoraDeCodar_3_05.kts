fun main(){
    //5 - Faça um algoritmo que calcule e escreva a média aritmética dos dois números inteiros informados
    // pelo usuário e todos os números inteiros entre eles. Considere que o primeiro sempre será menor que o segundo.

    var x = readln().toInt()
    var y = readln().toInt()
    var a = 0
    var b = 0
    for(i in x..y){
        a += i
        b++
    }

    println(a/b)
}
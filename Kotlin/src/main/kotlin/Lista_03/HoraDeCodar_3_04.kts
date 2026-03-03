fun main(){
    //4 - Faça um algoritmo que calcule e escreva a média aritmética dos números inteiros entre 15 (inclusive) e 100 (inclusive).
    var x= 0
    var y = 0

    for(i in 15..100){
        x += i
        y++
    }

    println(x/y)
}
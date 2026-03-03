fun main(){
    //11 - Escreva um programa para imprimir todas as tabuadas de 1 a N. N será informado pelo usuário.

    var x = readln().toInt()

    for(i in 1..x){
        for(j in 0..10){
            println("$i x $j = ${i*j}")
        }
        println("-------")
    }
}
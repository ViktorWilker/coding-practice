fun main(){
    //6. Faça um programa que receba quatro valores informados pelo usuário, mas informe somente o primeiro,
    // o último e o maior de todos eles (considere que todos os números informados serão diferentes)

    var x = Array(4){0}

    for(i in x.indices){
        x[i] = readln().toInt()
    }
    println("Primeiro: ${x[0]}")
    println("último: ${x[3]}")
    x.sortDescending()
    println("Maior: ${x[0]}")
}
fun main(){
    //7. Faça um programa que leia 6 números que o usuário vai informar.
    // Todos os números lidos com valor inferior a 72 devem ser somados. Escreva o valor final da soma efetuada e também todos valores que o usuário informou.

    var x = Array(6){0}
    var y = 0

    for(i in x.indices){
        x[i] = readln().toInt()
        if(x[i] < 72){
            y += x[i]
        }
    }

    println("Valores Digitados:")
    for(i in x.indices){
        println(x[i])
    }
    println("Soma fina: $y")
}
fun main(){
    //8. Escreva um programa que calcule a média de quatro números informados pelo usuário,
    // mas somente se esses números forem maiores que 0 e menores que 10. No final, se a média for maior que cinco o usuário receberá uma mensagem
    // "Você passou no teste". Em qualquer outra situação, ele receberá uma mensagem de "tente novamente"

    var notes = Array(4){0f}
    var soma = 0f
    var amount = 0
    var media = 0f
    for(i in notes.indices){
        var x = readln().toFloat()
        if(x >= 0 && x <= 10 ){
            soma += x
            notes[i] = x
            amount++
        }
    }
    media = soma/amount
    println("Média: $media")
    if(media > 5){
        println("Você passou no teste")
    }else{
        println("Tente novamente")
    }

}
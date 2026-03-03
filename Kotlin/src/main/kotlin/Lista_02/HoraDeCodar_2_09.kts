fun main(){
    //9. Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma mensagem que diga se
    // ela poderá ou não votar este ano (não é necessário considerar o mês em que ela nasceu).

    var x = readln().toInt()
    var y = 2026 - x
    if( y < 18){
        println("Não Pode votar")
    }else{
        println("pode votar")
    }
}
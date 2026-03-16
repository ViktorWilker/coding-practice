#!/usr/bin/env kotlin

//Vamos criar uma lista de compras.
//Crie uma array de frutas, exiba-a ao usuário e, em seguida, peça ao usuário para digitar o nome de uma das frutas.
//Caso a fruta esteja no array, remova-a e exiba a mensagem "Fruta foi retirada da lista".
//Peça novamente para o usuário digitar o nome de uma fruta para ser removida.
//Sempre que o usuário procurar por uma fruta que não está no array exiba a mensagem "Fruta indisponível no nosso mercado".
//Quando o array não possuir mais itens dentro de si, escreva "Lista de compras finalizada".

main()
fun main(){
    var fruits = arrayListOf("manga", "banana", "abacaxi", "mamão", "melão", "uva", "morango", "maracujá")
    println("Lista de Frutas: ${fruits.toString()}")

    while (fruits.size > 0){
        print("Escolha uma fruta: ")
        var fruit = readln()
        if(fruits.contains(fruit)){
            fruits.remove(fruit)
            println("Fruta foi retirada da lista")
        }else{
            println("Fruta indisponível no nosso mercado")
        }
    }

    println("Lista de compras finalizada")

}
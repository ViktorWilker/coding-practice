#!/usr/bin/env kotlin

//2 - Planetas
//Crie uma array de planetas que inclua "Terra", "Marte", "Plutão", "Vênus", "Júpiter", "Saturno"  e,
// em seguida, peça ao usuário para digitar o nome de um planeta.
//Verifique se o planeta que o usuário informou está na array e informe ao usuário.
main()
fun main(){
    var planets = arrayOf("Terra", "Plutão", "Vênus", "Júpiter", "Saturno")
    print("Digite o nome de um planeta: ")
    var userInput = readln()
    if(planets.contains(userInput)){
        println("Esse planeta está na lista")
    }else{
        println("Esse planeta não está na lista")
    }

    println(planets.contentToString())
}
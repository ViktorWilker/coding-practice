#!/usr/bin/env kotlin
main()
fun main(){
    /*Crie um programa onde o usuário possa cadastrar estudantes sem limites, e, em seguida, Se o usuário digitar "PARE" o
    programa deve exibir a quantidade de estudantes cadastrados e a lista com cada um deles*/

    var students = ArrayList<String>()
    var stopCond: String
    println("Digite o nome dos alunos ou 'PARE' para encerrar o programa:")
    while (true) {
        var x = readln()
        if (x == "PARE") {break}
        students.add(x)
    }

    println("Quantidade de alunos: ${students.size}")
    println(students)
}

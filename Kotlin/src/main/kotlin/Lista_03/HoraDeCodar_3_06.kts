fun main(){
    //6 - Escreva um programa para ler 2 notas de um aluno, calcular e imprimir a média final. Considere que a nota de aprovação é 9,5.
// Logo após escrever a mensagem "Calcular a média de outro aluno Sim/Não?" e solicitar um resposta. Se a resposta for "S",
// o programa deve ser executado novamente, caso contrário deve ser encerrado exibindo a quantidade de alunos aprovados.

    var nAlunos = 0
    var rep = true
    while (rep){
        var n1 = readln().toFloat()
        var n2 = readln().toFloat()

        var media = (n1+n2)/2
        if(media >= 9.5){
            println("você passou, média: $media")
            nAlunos++
        }else{
            println("você não passou, média: $media")
        }
        println("Calcular a média de outro aluno Sim/Não?")
        var resp = "x"

        while (resp != "s" || resp != "S"){
            resp = readln()
        }

        if(resp == "n" || resp == "N"){
            rep = false
        }
    }

    println("Alunos aprovados: $nAlunos")
}

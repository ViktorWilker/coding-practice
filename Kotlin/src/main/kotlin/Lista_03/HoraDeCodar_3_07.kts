fun main(){
    //7 - Escreva um algoritmo para ler as notas de avaliações de um aluno, calcule e imprima a média (simples) desse aluno. Só devem ser aceitos valores válidos durante
    // a leitura (0 a 10) para cada nota. São 6 notas ao total.
    //Caso o valor informado para qualquer uma das notas esteja fora do limite estabelecido, deve ser solicitado um novo valor ao usuário.

    var notas = Array(6){0f}
    var media = 0f
    var total = 0f

    for(i in notas.indices){
        notas[i] = readln().toFloat()
        while(notas[i] < 0 && notas[i] > 10){
            println("Insira uma nota válida: ")
            notas[i] = readln().toFloat()
        }
        total += notas[i]
    }

    media = total/6
    println("A média é: $media")
}
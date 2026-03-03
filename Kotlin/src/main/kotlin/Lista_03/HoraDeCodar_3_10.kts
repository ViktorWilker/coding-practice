fun main(){
    //10 - Escreva um programa em que o usuário informe 10 valores e escreva quantos desses valores lidos estão
// entre os números 24 e 42 (incluindo os valores 24 e 42) e quantos deles estão fora deste intervalo.

    var x = Array(10){0}
    var outRange = 0
    var inRange = 0

    for(i in x.indices){
        x[i] = readln().toInt()
        if(x[i] >= 24 && x[i] <= 42){
                inRange++
        }else{
            outRange++
        }
    }

    println("Dentro do range: $inRange")
    println("Fora do range: $outRange")
}
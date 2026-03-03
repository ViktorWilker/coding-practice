package Lista_02

//3. Faça um programa para ler 3 valores (considere que não serão informados valores iguais) e escrever o maior deles.

fun main(){
    var greater = -999
    val x = Array(3){0}

    for(i in x.indices){
        x[i] = readln().toInt()
        if(x[i] > greater){
            greater = x[i]
        }
    }

    println(greater)
}
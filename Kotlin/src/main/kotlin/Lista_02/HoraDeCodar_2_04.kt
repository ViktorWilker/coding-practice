package Lista_02

//4. Faça um programa que leia 3 valores informados pelo usuário (considere que não serão informados valores iguais)
// e escrever a soma dos 2 maiores.

fun main(){
    val nums = mutableListOf<Int>()
    for(i in 1..3){
        nums.add(readln().toInt())
    }

    nums.sortDescending()
    println(nums[0] + nums[1])
}
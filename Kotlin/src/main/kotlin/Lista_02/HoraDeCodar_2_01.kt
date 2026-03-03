#!/usr/bin/env kotlin

package Lista_02

//2. Faça um programa que leia um valor informado pelo usuário e diga se o valor informado é positivo, negativo ou zero.
fun main(){
    var x = readln().toInt()
    if (x > 0){
        println("positivo")
    }else if(x < 0){
    print("negativo")
    }else{
        println("zero")
    }
}
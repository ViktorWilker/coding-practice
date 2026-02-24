programa {
  funcao inicio() {
    //4. Faça um programa que leia 3 valores informados pelo usuário (considere que não serão informados valores iguais) e escrever a soma dos 2 maiores.
    inteiro i,x = 0,y = -1

    para(i = 0; i < 3; i++){
      inteiro xL
      leia(xL)
      se(xL > y){
        x = y
        y = xL
      }senao se(xL > x){
        x = xL
      }
    }
    escreva(x + y)
  }
}

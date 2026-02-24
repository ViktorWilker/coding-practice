programa {
  funcao inicio() {
    
    inteiro figura_nmr

    escreva("Digite o número da figura que você deseja calcular a área:\n")
    escreva("1-Retângulo, 2-Quadrado, 3-Losângulo, 4-Trapézio, 5-Paralelogramo, 6-Triângulo, 7-Círculo\n")

    leia(figura_nmr)

    escolha(figura_nmr){
      caso 1:
        real b, h
        escreva("informe o valor da base: ")
        leia(b)
        escreva("informe o valor da altura: ")
        leia(h)
        escreva(CalcularRetangulo(b, h))
      pare

      caso 2:
        real l
        escreva("Informe o valor do lado: ")
        leia(l)
        escreva(CalcularQuadrado(l))
      pare

      caso 3:
        real dM,dm
        escreva("Informe o valor da Diagonal Maior: ")
        leia(dM)
        escreva("Informe o valor da Diagonal Menor: ")
        leia(dm)
        escreva(CalcularLosangulo(dM,dm))
      pare

      caso 4:
        real bM,bm,h
        escreva("Informe o valor da Base Maior: ")
        leia(bM)
        escreva("Informe o valor da Base Menor: ")
        leia(bm)
        escreva("Informe o valor da altura: ")
        leia(h)

        escreva(CalcularTrapezio(bM,bm,h))
      pare

      caso 5:
        real b, h
        escreva("informe o valor da base: ")
        leia(b)
        escreva("informe o valor da altura: ")
        leia(h)
        escreva(CalcularRetangulo(b, h))
      pare

      caso 6:
        real b, h
        escreva("informe o valor da base: ")
        leia(b)
        escreva("informe o valor da altura: ")
        leia(h)
        escreva(CalcularTriangulo(b, h))
      pare

      caso 7:
        real r
        escreva("Informe o valor do Raio: ")
        leia(r)
        escreva(CalcularCirculo(r))
      pare
    }
      
  }

  funcao real CalcularRetangulo(real b, real h)
  {
    retorne b*h
  }

  funcao real CalcularQuadrado(real l){
    retorne l*l
  }

  funcao real CalcularLosangulo(real x, real y){
    retorne x*y/2
  }

  funcao real CalcularTrapezio(real x, real y, real z){
    retorne (x + y) * z / 2
  }

  funcao real CalcularTriangulo(real x, real y){
    retorne x * y / 2
  }

  funcao real CalcularCirculo(real r){
    retorne (r * r) * 3.14
  }
}

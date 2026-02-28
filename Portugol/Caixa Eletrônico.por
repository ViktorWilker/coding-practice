programa {

    real saldo_atual = 0
    cadeia nome_do_usuario = ""
    logico run = verdadeiro
    inteiro senha = 3589
    logico logado = falso
  funcao inicio() {
    limpa()
    inteiro opc = 0

    escreva("Bem-vindo ao Banco Digital\n")
    se(nao logado){
      se(nao login()){
        retorne
      }
      logado = verdadeiro
    }

    limpa()

    enquanto(run){
      escreva("Olá ",nome_do_usuario," é um prazer ter você aqui!\n")
      escreva("[1]Saldo - [2]Extrato - [3]Saque - [4]Depósito - [5]Transferência - [6]Sair\n")
      escreva("Opção: ")
    leia(opc)

    limpa()
    escolha(opc){
      caso 1:
        se(nao chekPassword()){
          retorne
        }
        ShowSaldo()
        pare
      caso 2:
          se(nao chekPassword()){
          retorne
        }
        ShowExtrato()
        pare
      caso 3:
        se(nao chekPassword()){
          retorne
        }
        Saque()
        pare
      caso 4:
        Deposito()
        pare
      caso 5:
        se(nao chekPassword()){
          retorne
        }
        Transferencia()
        pare
      caso 6:
        escreva("saindo...")
        run = falso
        pare
      caso contrario:
        erro()
    }
  }
   


}

  funcao logico login(){
    escreva("Digite seu nome: ")
    leia(nome_do_usuario)
    retorne chekPassword()
    limpa()
  }

  funcao logico chekPassword() {
    inteiro lSenha = 0
    inteiro tentativas = 3

    enquanto (tentativas > 0) {
      escreva("\n[SEGURANÇA]Insira a senha: ")
      leia(lSenha)

      se (lSenha == senha) {
        retorne verdadeiro
     } senao {
        tentativas--
        escreva("\nSenha incorreta! Tentativas restantes: ", tentativas, "\n")
      }
  }
  escreva("\n!!! Limite de tentativas excedido. Programa encerrado por segurança. !!!\n")
  retorne falso

  }

  funcao ShowSaldo(){
    escreva("\n===== SALDO =====\n")
    escreva("Saldo atual: R$", saldo_atual)
    escreva("\n====================\n")

    backtomenu()
  }

  funcao ShowExtrato(){
    escreva("\n===== EXTRATO =====\n")
    escreva("01/02 - Depósito: +500.00\n")
    escreva("03/02 - Supermercado: -120.50\n")
    escreva("05/02 - Farmácia: -45.90\n")
    escreva("10/02 - Netflix: -39.90\n")
    escreva("15/02 - Transferência recebida: +250.00\n")
    escreva("====================\n")

    backtomenu()
  }

  funcao Saque(){
    real saqueval = 0
    enquanto(saqueval<=0 ou saqueval > saldo_atual){
    escreva("\n===== EXTRATO =====\n")
    escreva("Informe o valor de saque: ")
      leia(saqueval)
      se(saqueval<=0){
        escreva("Informe um valor válido!!")
      }
    }

    saldo_atual -= saqueval
    escreva("\n Saque realizado com sucesso!")
    backtomenu()
  }

  funcao Deposito(){
    real valDeposito = 0
    escreva("\n===== DEPOSITO =====\n")
    escreva("Informe o valor de depósito: ")
    leia(valDeposito)
    se(valDeposito <= 0){
      escreva("\nInsira um valor de deposito válido!")
      Deposito()
    }

    saldo_atual += valDeposito
    escreva("\nDeposito realizado com sucesso!!")
    backtomenu()
  }

  funcao Transferencia(){
    real transval = 0
    inteiro conta = 0
    logico rep = verdadeiro
    escreva("\n===== TRANSFERENCIA =====\n")
    escreva("Insira o número da conta a transferir(5 dígitos): ")
    enquanto(rep){
    leia(conta)
    se(conta > 99999 ou conta < 9999){
      escreva("Insira uma conta válida!!")
    }senao{
          rep = falso
    }
  }
    rep = verdadeiro
    enquanto(rep){
      limpa()
      escreva("Insira o valor da transferencia: ")
      leia(transval)
      se(transval > saldo_atual ou transval <= 0){
        escreva("\nInsira um valor válido!!")
      }senao{
      saldo_atual -= transval
      escreva("\nTransferencia de R$", transval, "\nPara conta: ", conta, "\n Efetuada com sucesso")
      rep = falso
      }
    }

    backtomenu()

  }

  funcao erro(){
    escreva("Escolha uma opção válida!!")
    backtomenu()
  }

  funcao backtomenu(){
    escreva("\nvoltar ao menu?[s/n]\n")
    cadeia opc
    leia(opc)
    se(opc == "s" ou opc == "S"){
      run = verdadeiro
    }senao{
      run = falso
    }

      inicio()
  }

}

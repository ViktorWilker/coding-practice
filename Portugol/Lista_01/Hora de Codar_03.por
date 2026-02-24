programa {
  funcao inicio() {
    //Escreva um programa em que o usuário informe o seu nome e em seguida o programa perguntará a idade do usuário. Agora o programa deve exibir a mensagem "Olá, [NomeDoUsuario], sua idade é [idade]".

    cadeia usuario_nome
    inteiro usuario_idade

    escreva("Informe seu nome: ")
    leia(usuario_nome)
    escreva("Informe sua idade: ")
    leia(usuario_idade)

    escreva("\n Olá, ", usuario_nome, ", sua idade é ", usuario_idade)
  }
}

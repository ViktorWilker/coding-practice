fun main(){
    //Escreva um programa em que o usuário informe o seu nome e em seguida o programa perguntará
    // a idade do usuário. Agora o programa deve exibir a mensagem "Olá, [NomeDoUsuario], sua idade é [idade]".

    var nome_usuario = readln()
    println("Informe sua idade: ")
    var idade = readln().toInt()
    println("Olá, $nome_usuario, sua idade é $idade")
}


class User(val userName: String, private val password: Int = 3589) {
    fun checkPassword(typed: Int): Boolean = typed == password
}

    var
    var bLogged = false

    if(!bLogged){
        if(!Login()) return
        bLogged = true
    }


println("Bem-vindo ao banco digital")


    println("Olá usuário, é um prazer ter você aqui")
    println("[1]Saldo - [2]Extrato - [3]Saque - [4]Depósito - [5]Transferência - [6]Sair")












fun Login(): Boolean {
    print("Digite seu nome: ")
    val name = readln()
    val current_user = User(name)
    print("Digite a senha: ")
    val password = readln().toInt()

    return current_user.checkPassword(password)
}

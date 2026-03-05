class User(val userName: String, private val password: Int = 3589) {
    fun checkPassword(): Boolean {
        var tryied = 3
        while (tryied > 0) {
            print("Digite a senha: ")
            val typed = readln().toInt()

            if (typed == password) {
                return true
            }

            println("!!Senha incorreta!!")
            tryied--
            println("Tentativas restantes: $tryied")
        }

        println("Acesso bloqueado...")
        return false
    }
}

main()
fun main(){

    var bLogged = false
    lateinit var currentUser: User

    if (!bLogged){
        currentUser = Login()
    }

    println("Bem-vindo ao banco digital")
    println("Olá ${currentUser.userName}, é um prazer ter você aqui")
    println("[1]Saldo - [2]Extrato - [3]Saque - [4]Depósito - [5]Transferência - [6]Sair")
}

fun Login(): User {
    print("Digite seu nome: ")
    val name = readln()

    val currentUser = User(name)

    return currentUser
}
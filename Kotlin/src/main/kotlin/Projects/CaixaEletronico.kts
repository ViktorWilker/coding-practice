class User(val userName: String, val password: Int = 3589) {
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

    private var saldo = 0f
    fun showSaldo(){if (checkPassword()){println(saldo)
    backToHome()}else{return}}
    fun addSaldo(value: Float){if (checkPassword()) {saldo += value
    backToHome()}else{return} }
    fun saque(value: Float){if (checkPassword()) {saldo -= value
    backToHome()}else{return}}

    }

main()
var bLogged = false
lateinit var currentUser: User
var run = true
fun main() {

    println("!!Bem vindo ao seu banco digital!!")
    currentUser = Login()!!
    home()
}

fun home(){

    while (run) {
        var opc = 0
        println("Bem-vindo ao banco digital")
        println("Olá ${currentUser.userName}, é um prazer ter você aqui")
        println("[1]Saldo - [2]Extrato - [3]Saque - [4]Depósito - [5]Transferência - [6]Sair")

        opc = readln().toInt()
        when (opc) {
            1 -> currentUser.showSaldo()
            2 -> currentUser.extrato()
            3 -> currentUser.saque(readln().toFloat())
            4 -> currentUser.addSaldo(readln().toFloat())
            5 -> currentUser.transf()
            else -> ""
        }
    }
}

fun Login(): User? {
    print("Digite seu nome: ")
    val name = readln()
    val currentUser = User(name)
    if(!currentUser.checkPassword()){return null}

    return currentUser
}
fun User.extrato(){
    if(!checkPassword()){return}
    backToHome()
}

fun User.transf(){
    if(!currentUser.checkPassword()){return}
    print("Informe o número da conta para transferir(4 dígitos):")
    val x = readln().toInt()
    if(x > 9999 || x < 1000){erro("conta inválida!Tente novamente mais tarde")}
    print(" Digite o valor a ser transferido: ")
    val value = readln().toFloat()
    currentUser.saque(value)
    backToHome()
}

fun erro(msg: String){
    println(msg)
    main()
}

fun backToHome(){
    var opc = 0
    println("Voltar para o menu?(menu[1] - sair[2]")
    opc = readln().toInt()
    if(opc == 2){
        run = false
    }

    home()
}
let jogar = confirm("Vamos jogar pedra, papel, tesoura?");

if (jogar) {
    let escolhaPlayer = prompt("Pedra, papel ou tesoura?");
    
    if (escolhaPlayer) {
        let playerum = escolhaPlayer.trim().toLowerCase();
        

        if (playerum === "pedra" || playerum === "papel" || playerum === "tesoura") {

            let escolhacomputador = Math.floor(Math.random() * 3 + 1);
            let computador = escolhacomputador === 1 ? "pedra"
                           : escolhacomputador === 2 ? "papel"
                           : "tesoura";

            alert("Computador escolheu: " + computador);


            if (playerum === computador) {
                alert("É velha meu vei KKKKK");
            } else {
                let venceu = (playerum === "pedra" && computador === "tesoura") ||
                             (playerum === "papel" && computador === "pedra") ||
                             (playerum === "tesoura" && computador === "papel");

                if (venceu) {
                    alert("Tu venceu doidao KKK!");
                } else {
                    alert("Fica pra proxima :( O PC ganhou.");
                }
            }
        } else {
            alert("Escreve direito, doido! kkkk");
        }
    } else {
        alert("Cancelou? Vacilão kkkk");
    }
} else {
    alert("Vacilão!");
}
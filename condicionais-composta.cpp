#include <iostream>

using namespace std;

int main()
{
    //exibir mensagem de boas vindas para um usuário que informou um nome ou exiba bem vindo visitante!
    system("clear");
    cout << "Iniciando o programa do Gui \n";

    string nome = "";
    string resposta = "nao";

    cout << "Voce gostaria de informar o seu nome? sim/nao ";
    cin >> resposta;
    
    if(resposta == "sim"){
        cout << "Qual é o seu nome? ";
        cin >> nome;
        cout << "Bem vindo, " << nome << endl;
    } else {
        cout << "Bem vindo, visitante" << endl;
    }


    cout << "Fim do programa!!" << endl;


    return 0;
}

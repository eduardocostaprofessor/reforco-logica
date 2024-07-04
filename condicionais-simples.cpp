#include <iostream>

using namespace std;

int main()
{
    //exibir mensagem de boas vindas apenas para um usuário que informou um nome
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
    }


    cout << "Fim do programa!!" << endl;


    return 0;
}

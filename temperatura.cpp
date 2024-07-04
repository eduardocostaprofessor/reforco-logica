#include <iostream>

using namespace std;

int main()
{
    // 0 - 15 - acender o led vermelho
    // 16 - 23 - acender o led azul
    // 24 - 30 - acerder o led verde
    // 32 - 37 - acender o led roxo
    // acima de 38 - acender os leds vermelho e verde

    system("clear");
    cout << "Iniciando o programa temperatura \n";
    int temperatura = 5;

    if(temperatura >= 0 && temperatura <= 15){
        cout << "Acender o led vermelho  \n";
    } else if(temperatura >= 16 && temperatura <= 23) {
        cout << "Acender o led azul  \n";

    } else if( temperatura >= 24 && temperatura <= 30 ) {
        cout <<  "Acender o led verde  \n";
    } else if ( temperatura >= 32 && temperatura <= 37 ) {
        cout << "Acender o led roxo  \n";
    } else {
        cout << "acender o led vermelho e o verde  \n";
    }

    cout << "Fim do programa!!" << endl;


    return 0;
}

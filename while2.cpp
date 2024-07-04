#include <iostream>

using namespace std;

int main()
{
    system("clear");
    int qtdPessoas;

    cout << "Quantas pessoas você quer saudar? ";
    cin >> qtdPessoas;

    int contador = 1;

    while (contador <= qtdPessoas)
    {
        cout << "Boa tarde " << contador << endl;
        contador++;// o contador soma mais 1
    }
    
    return 0;
}

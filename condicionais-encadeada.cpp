#include <iostream>

using namespace std;
// Pergunte para um jogador qual é sua idade e exiba qual é sua categoria no esporte da seguinte forma:

// sem categoria - 0 a 2
// infantil - 3 a 11 anos
// juvenil - 12 a 17 anos
// adulto - 18 a 34 anos
// master - acima de 35 anos

int main()
{
    int idade = 8;

    if (idade >= 3 && idade <= 11)
    {
        cout << "Você está na categoria: Infantil" << endl;
    }
    else if (idade >= 12 && idade <= 17)
    {
        cout << "Você está na categoria: Juvenil" << endl;
    }
    else if (idade >= 18 && idade <= 34)
    {
        cout << "Você está na categoria: Adulto"  << endl;
    }
    else if (idade >= 35)
    {
        cout << "Você está na categoria: Master"  << endl;
    }
    else
    {
        cout << "Você não tem idade suficiente para fazer este esporte"  << endl;
    }

    return 0;
}

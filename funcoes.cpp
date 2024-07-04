#include <iostream>

using namespace std;

float matheusSomador(float primeiroNumero, float segundoNumero)
{
    return primeiroNumero + segundoNumero;
}


int main()
{
    system("clear");
    float numero1 = 5.5;
    float numero2 = 15.27;

    float resultado = matheusSomador(numero1, numero2);
    cout << "O RESULTADO eh: " << resultado << endl;

    resultado = matheusSomador(17, 30);
    cout << "O RESULTADO eh: " << resultado << endl;

    resultado = matheusSomador(25, 60);
    cout << "O RESULTADO eh: " << resultado << endl;




    return 0;
}
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float peso;
    float altura;
    float imc;

    cout << "Informe o peso: " << endl;
    cin >> peso;
    cout << "Informe a altura: " << endl;
    cin >> altura;

    imc = peso / pow(altura, 2);

    if (imc < 18.5)
    {
        cout << "Abaixo do peso";
    }
    else if (imc >= 18.5 && imc < 24.9)
    {
        cout << "Peso normal";
    }
    else if (imc >= 25 && imc < 29.9)
    {
        cout << "Sobrepeso";
    }
    else
    {
        cout << "Obesidade";
    }

    return 0;
}
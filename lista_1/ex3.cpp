#include <iostream>
using namespace std;

int main()
{

    float num1, num2;

    cout << "Informe o 1º número: ";
    cin >> num1;
    cout << "Informe o 2º número: ";
    cin >> num2;

    float mul = num1 * num2;
    cout << "A multiplicação é: " << mul << endl;

    if (num2 == 0)
    {
        cout
            << "Divisão por zero não é permitida."
            << endl;

        return 1;
    };

    float div = num1 / num2;
    cout << "A divisão é: " << div << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    int num1, num2;

    cout << "Informe o 1º número: ";
    cin >> num1;
    cout << "Informe o 2º número: ";
    cin >> num2;

    if (num1 == num2)
    {
        cout << "Os números são iguais." << endl;
    }
    else if (num1 > num2)
    {
        cout << "O maior número é: " << num1 << endl;
    }
    else
    {
        cout << "O maior número é: " << num2 << endl;
    }

    return 0;
}
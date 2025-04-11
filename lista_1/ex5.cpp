#include <iostream>
using namespace std;

int main()
{

    float num1, num2;
    cout << "Informe o 1º número: ";
    cin >> num1;
    cout << "Informe o 2º número: ";
    cin >> num2;

    float mid = (num1 + num2) / 2;
    cout << "A média é: " << mid << endl;

    return 0;
}
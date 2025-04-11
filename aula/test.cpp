#include <iostream>
using namespace std;

int main()
{
    int altura_do_kaio = 182;
    int altura_da_femea;

    cout << "Informe a altura da fêmea: ";
    cin >> altura_da_femea;

    if (altura_da_femea > altura_do_kaio)
    {
        cout << "TA DENTRO";
    }
    else if (altura_da_femea == altura_do_kaio)
    {
        cout << "ACHO QUE NÃO";
    }
    else
    {
        cout << "TA FORA";
    };

    return 0;
}
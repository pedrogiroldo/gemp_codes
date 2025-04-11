#include <iostream>
using namespace std;

int main() {
    
    int num;

    cout << "Informe um número: ";
    cin >> num;

    bool isPar = num % 2 == 0;

    cout << "O número " << num << (isPar ? " é par." : " é ímpar.") << endl;
    
    return 0;
}
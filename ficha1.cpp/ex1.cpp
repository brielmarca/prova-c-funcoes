#include <iostream>
using namespace std;

int inserir() {
    int valor;
    cout << "Introduza um valor inteiro: ";
    cin >> valor;
    return valor;
}

void comparar(int x) {
    if (x > 0)
        cout << "O valor e positivo\n";
    if (x < 0)
        cout << "O valor e negativo\n";
    if (x == 0)
        cout << "O valor e zero\n";
    if (x != 0)
        cout << "O valor e diferente de zero\n";
}

int main() {
    int x = inserir();
    comparar(x);
    return 0;
}
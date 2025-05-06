#include <iostream>
using namespace std;

// Função mais1 que incrementa o valor de x em 1
void mais1(int& x) {
    x += 1;
}

int main(int argc, char** argv) {
    int x = 5;
    cout << "Valor inicial de x: " << x << "\n";
    mais1(x);
    cout << "Valor de x após chamar mais1(): " << x << "\n";
    return 0;
}
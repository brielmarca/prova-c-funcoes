#include <iostream>
using namespace std;

int x[5] = {10, 11, 12, 13, 14};
int i;
int maior_valor; // Variável para armazenar o maior valor

void maior() {
    maior_valor = x[0];
    for (i = 1; i < 5; i++) {
        if (x[i] > maior_valor) {
            maior_valor = x[i];
        }
    }
    cout << "O maior valor e: " << maior_valor << endl;
}

int main() {
    maior(); // Chama a função uma única vez
    return 0;
}
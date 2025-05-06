#include <iostream>
#include <string.h>
using namespace std;

// Função para inverter uma string de 4 caracteres
void inverter(char x[]) {
    // Inverte os caracteres usando um loop
    for (int i = 0; i < 2; i++) {
        char temp = x[i];
        x[i] = x[3 - i];
        x[3 - i] = temp;
    }
    // Imprime a string invertida
    cout << "String invertida: " << x << "\n";
}

int main(int argc, char** argv) {
    char x[4];
    cout << "Inserir numero 4 digitos\n";
    cin >> x;
    inverter(x);
    return 0;
}
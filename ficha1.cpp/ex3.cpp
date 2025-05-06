#include <iostream>
using namespace std;

// Função para inserir um valor float
float inserir() {
    float valor;
    cout << "Introduza um valor: ";
    cin >> valor;
    return valor;
}

// Função para realizar a operação de divisão
float operacao(float a, float b) {
    if (b == 0) {
        cout << "Erro: Divisão por zero!\n";
        return 0; // Ou pode retornar um valor especial como NaN
    }
    return a / b;
}

int main() {
    int i = 1;
    float a, b, resultado;

    while (i == 1) {
        // Chama a função inserir para obter os valores
        a = inserir();
        b = inserir();

        // Chama a função operacao para realizar a divisão
        resultado = operacao(a, b);
        if (resultado != 0) {
            cout << "Resultado: " << resultado << "\n";
        }

        // Opção para repetir ou sair
        cout << "nRepetir o programa - 1\\nSair - outra tecla\n";
        cin >> i;
    }

    return 0;
}
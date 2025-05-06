#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int i = 1;
    char a;
    int num1, num2, resultado;

    while (i == 1) {
        cout << "Introduza um comando (+, -, *, s para sair): ";
        cin >> a;

        switch (a) {
            case '+':
                cout << "Introduza o primeiro numero: ";
                cin >> num1;
                cout << "Introduza o segundo numero: ";
                cin >> num2;
                resultado = num1 + num2;
                cout << "Resultado: " << resultado << "\n";
                break;

            case '-':
                cout << "Introduza o primeiro numero: ";
                cin >> num1;
                cout << "Introduza o segundo numero: ";
                cin >> num2;
                resultado = num1 - num2;
                cout << "Resultado: " << resultado << "\n";
                break;

            case '*':
                cout << "Introduza o primeiro numero: ";
                cin >> num1;
                cout << "Introduza o segundo numero: ";
                cin >> num2;
                resultado = num1 * num2;
                cout << "Resultado: " << resultado << "\n";
                break;

            case 's':
            case 'S':
                cout << "Saindo do programa.\n";
                i = 0; // Sai do loop
                break;

            default:
                cout << "Comando invalido. Tente novamente.\n";
                break;
        }
    }

    return 0;
}
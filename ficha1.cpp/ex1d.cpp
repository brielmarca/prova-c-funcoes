#include <iostream>
using namespace std;

int main(int argc, char** argv){
    int tabela[2][2];
    
    tabela[0][0] = 10;
    tabela[0][1] = 100;
    tabela[1][0] = 20;
    tabela[1][1] = 111;
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Digite o novo valor para tabela[" << i << "][" << j << "]: ";
            cin >> tabela[i][j];
        }
    }
    
    cout << "Nova listagem dos dados:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << tabela[i][j] << "\n";
        }
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int linha_alvo; 
    cin >> linha_alvo;
    
    char operacao; 
    cin >> operacao;
    
    float matriz[12][12];
    float soma = 0;

    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> matriz[i][j];
            
            
            if(i == linha_alvo) {
                soma += matriz[i][j];
            }
        }
    }

    cout << fixed << setprecision(1);

    if(operacao == 'S') {
        cout << soma << "\n";
    } 
    else if(operacao == 'M') {
        float media = soma / 12.0;
        cout << media << "\n";
    }

    return 0;
}
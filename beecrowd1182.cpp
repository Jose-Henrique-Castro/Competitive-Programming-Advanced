#include <bits/stdc++.h>
using namespace std;

int main(){

    float matriz[12][12];
    int coluna_alvo; 
    cin >> coluna_alvo;
    
    char s_m; 
    cin >> s_m;
    
    float soma = 0;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            
            cin >> matriz[i][j];

          
            if(j == coluna_alvo){ 
                soma += matriz[i][j];
            }
        }
    }

    
    cout << fixed << setprecision(1);

    if(s_m == 'S') {
        cout << soma << "\n";
    }
    else {
        float media = soma / 12.0;
        cout << media << "\n";
    }

    return 0;
}
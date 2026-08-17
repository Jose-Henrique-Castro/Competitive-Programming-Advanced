#include <bits/stdc++.h>
using namespace std;


int main(){

    char s_m; cin >> s_m;
    float matriz[12][12];
    float soma = 0;
    float cont = 0;

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){

            cin >> matriz[i][j];

        }
    }

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){

            if(j>i) {soma += matriz[i][j]; cont++;}
            

        }
    }

    if(s_m == 'S') cout << fixed << setprecision(1) << soma << endl;
    else {
        float media = soma/cont;
        cout << fixed << setprecision(1) << media << endl;
    }
    

    return 0;
}
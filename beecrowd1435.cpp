#include <bits/stdc++.h>
using namespace std;


int main(){

    int tam_matriz;

    while(cin >> tam_matriz && tam_matriz!=0){

        int matriz[tam_matriz][tam_matriz];

        for(int i=0;i<tam_matriz;i++){
            for(int j=0;j<tam_matriz;j++){

                int topo = i;
                int esquerda = j;
                int baixo = tam_matriz - 1 - i;
                int direita = tam_matriz - 1 - j;

                int menor = topo;
                if(esquerda<menor) menor = esquerda;
                if(baixo<menor) menor = baixo;
                if(direita<menor) menor = direita;

                matriz[i][j] = menor + 1;

            }
        }

        for(int i=0;i<tam_matriz;i++){
            for(int j=0;j<tam_matriz;j++){

                if(j==0) cout << setw(3) << matriz[i][j];
                else cout << " " << setw(3) << matriz[i][j];

            }
            cout << endl;
        }
        cout << endl;
    }
    

    



    return 0;
}
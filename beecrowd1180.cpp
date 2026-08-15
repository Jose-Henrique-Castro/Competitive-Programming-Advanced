#include <bits/stdc++.h>
using namespace std;

int main (){

    int n; cin >> n;
    int vetor[n];
    int menor;
    int posicao;

    int primeiro; cin >> primeiro; menor = primeiro; posicao = 0;

    for(int i=1;i<n;i++){

        int num; cin >> num;

        if(num<menor) {menor = num; posicao = i;} 

    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main (){

    int num; cin >> num; 
    int vetor [10] ; vetor[0] = num;
    cout << "N[0] = " << vetor[0] << endl;

    for (int i=1;i<10;i++){
        
        num *= 2;
        vetor[i] = num;

        cout << "N[" << i << "] = " << vetor[i] << endl; 

    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

    int vetor[20];
    

    for(int i=19;i>=0;i--){

        cin >> vetor[i];

    }

    for (int i=0;i<20;i++){

        cout << "N[" << i << "] = " << vetor[i] << endl;
        
    }


    return 0;
}
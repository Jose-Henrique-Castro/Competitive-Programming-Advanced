#include <bits/stdc++.h>
using namespace std;

int main(){

    int vetor[10];

    for(int i=0;i<10;i++){
        int num; cin >> num;
        if(num<=0) vetor[i] = 1;
        else vetor[i] = num;
        cout << "X[0] = " << vetor[i] << endl;
    }

    return 0;
}
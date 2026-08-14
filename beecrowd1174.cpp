#include <bits/stdc++.h>
using namespace std;

int main(){

    float A[5];

    for(int i=0;i<5;i++){
        cin >> A[i];
        if(A[i]<=10) cout << "A[" << i << "] = " << fixed << setprecision(1) << A[i] << endl;
    }


    return 0;
}
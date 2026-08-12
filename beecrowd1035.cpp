#include <bits/stdc++.h>
using namespace std;


int main (){

    int A , B , C , D;
    cin >> A >> B >> C >> D;
    int count = 0;

    if ( B > C ) count++;
    if ( D > A ) count++;
    if ( C + D > A + B ) count++;
    if ( C > 0 && D > 0 ) count++;
    if ( A%2==0 ) count++;

    if (count == 5) cout << "Valores aceitos" << endl;
    else cout << "Valores nao aceitos" << endl;    



    return 0;
}
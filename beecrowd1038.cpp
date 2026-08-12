#include <bits/stdc++.h>
using namespace std;


int main(){

    int id , qtd;
    cin >> id >> qtd;

    float price;

    if (id == 1 ) price = 4;
    if (id==2) price = 4.5;
    if (id==3) price = 5;
    if (id==4) price = 2;
    if (id==5) price = 1.5;

    float resultado = price*qtd;
    cout << "Total: R$ " << fixed << setprecision(2) << resultado << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

    float value; cin >> value;

    int notes[] = {10000,5000,2000,1000,500,200};
    int coins[] = {100,50,25,10,5,1};

    int num_notes , num_coins;

int value_coins = round(value *= 100); 

cout << "NOTAS:" << endl;
for (int i=0;i<6;i++){
    num_notes = value_coins/notes[i];
    cout << num_notes << " nota(s) de R$ " << fixed << setprecision(2) << notes[i]/100.0 << endl;
    value_coins %= notes[i];
}

cout << "MOEDAS:" << endl;
for(int i=0;i<6;i++){
    num_coins = value_coins/coins[i];
    cout << num_coins << " moeda(s) de R$ " << fixed << setprecision(2) << coins[i]/100.0 << endl;
    value_coins %= coins[i];
}



    return 0;
}
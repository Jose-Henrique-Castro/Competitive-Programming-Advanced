#include <bits/stdc++.h>
using namespace std;

int main(){


    int X = 0;
    int loops; cin >> loops;
    string add_dec;

    for(int i=0;i<loops;i++){
         cin >> add_dec;
        if(add_dec=="X++" || add_dec=="++X") {X++;}
        else if(add_dec=="--X" || add_dec=="X--") {X--;}
    }

    cout << X << endl;

    return 0;
}
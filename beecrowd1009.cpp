#include <bits/stdc++.h>
using namespace std;


int main(){


    string name; cin >> name;
    double salary; cin >> salary;
    double sales; cin >> sales;
    
    double comission = (sales*15)/100;
    double final_salary = salary + comission;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << final_salary << endl;


    return 0;
}
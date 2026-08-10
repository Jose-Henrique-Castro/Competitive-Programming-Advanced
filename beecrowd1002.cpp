#include <bits/stdc++.h>
using namespace std;

int main(){

    double radius; cin >> radius;

    double n = 3.14159;
    double area = n*radius*radius;

    cout << "A="<< fixed << setprecision(4) << area << endl;


    return 0;
}
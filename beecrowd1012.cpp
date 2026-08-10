#include <bits/stdc++.h>
using namespace std;

int main() {

double A,B,C; cin >> A >> B >> C;

double triangle = A*C/2;
double circle = 3.14159*C*C;
double trapezoid = ((A+B)/2)*C;
double square = B*B;
double rectangle = A*B;

cout << "TRIANGLE: " << fixed << setprecision(3) << triangle << endl;
cout << "CIRCLE: " << fixed << setprecision(3) << circle << endl;
cout << "TRAPEZOID: " << fixed << setprecision(3) << trapezoid << endl;
cout << "SQUARE: " << fixed << setprecision(3) << square << endl;
cout << "RECTANGLE: " << fixed << setprecision(3) << rectangle << endl;

return 0;

}
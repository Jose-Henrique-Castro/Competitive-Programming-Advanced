#include <bits/stdc++.h>
using namespace std;

int main() {
    int c1, c2;
    
    
    while (cin >> c1 >> c2 && c1 != 0 && c2 != 0) {
        
        if (c1 > 0 && c2 > 0) cout << "primeiro" << endl;
        else if (c1 < 0 && c2 > 0) cout << "segundo" << endl;
        else if (c1 < 0 && c2 < 0) cout << "terceiro" << endl;
        else if (c1 > 0 && c2 < 0) cout << "quarto" << endl;
        
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;


int main (){

    float n1 , n2 , n3 , n4; 
    cin >> n1 >> n2 >> n3 >> n4;

    float media = ( (n1*2) + (n2*3) + (n3*4) + (n4*1) ) / 10;

    cout << "Media: " << fixed << setprecision(1) << media << endl;

    if (media >= 7) cout << "Aluno aprovado." << endl;

    else if (media < 5) cout << "Aluno reprovado." << endl;

    else {

        cout << "Aluno em exame." << endl;

        float n5; cin >> n5; 
        cout << "Nota do exame: " << fixed << setprecision(1) << n5 << endl;

        float media_final = (media + n5) / 2;

        if ( media_final >= 5) cout << "Aluno aprovado." << endl;
        else cout << "Aluno reprovado" << endl;
        
        cout << "Media final: " << fixed << setprecision(1) << media_final << endl;

    };

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main (){
    double A, B, nota;

    cin >> A >> B;

    if(A <= 10 and B <= 10 and A >= 0 and B >= 0){
        nota = ((A * 3.5) + (B * 7.5))/11.0;
        cout << "MEDIA = " << fixed << setprecision(5) << nota << endl;
    } else {
        cout << "Digite um número válido." << endl;
    }

    return 0;
}
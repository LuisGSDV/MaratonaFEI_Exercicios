#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b, c, delta, root1, root2;

    cin >> a >> b >> c;

    delta = b * b - 4 * a * c;

    if(delta >= 0 and a!=0){
        root1 = (-1*b + sqrt(delta))/ (2 * a);
        root2 = (-1*b - sqrt(delta))/ (2 * a);

    
        cout << fixed << setprecision(5) << "R1 = " << root1 << endl;
        cout << "R2 = " << root2 << endl;
    } else{
        cout << "Impossivel calcular" << endl;
    }


    return 0;
}
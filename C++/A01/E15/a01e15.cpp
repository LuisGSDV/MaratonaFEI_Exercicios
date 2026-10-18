#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    
    double a, b, c, arearcttac, arearadc, areatrap;
    double areasq, arearctab, pi = 3.14159;
    
    cin >> a >> b >> c;
    arearcttac = (a*c)/2.0;
    arearadc = pi * pow(c, 2);
    areatrap = (a+b)/2.0 * c;
    areasq = pow(b, 2);
    arearctab = a * b;
    
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << arearcttac << endl;
    cout << "CIRCULO: " << arearadc << endl;
    cout << "TRAPEZIO: " << areatrap << endl;
    cout << "QUADRADO: " << areasq << endl;
    cout << "RETANGULO: " << arearctab  << endl;
 
    return 0;
}
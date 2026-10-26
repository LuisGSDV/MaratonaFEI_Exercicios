#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int a, b, c, d, somacd, somaab;
    
    cin >> a >> b >> c >> d;
    somacd = c +d;
    somaab = a +b;
    
    if(b > c && d > a && somacd > somaab && (a%2==0) && c > 0 && d >0){
        cout << "Valores aceitos" << endl;
    } else {
        cout << "Valores nao aceitos" << endl;
    }
 
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
 
    int N, h, rsth, m, s;
    
    cin >> N;
    
    h = N/3600;
    rsth = N %3600;
    
    m = rsth / 60;
    s = rsth%60;
    
    cout << h << ":" << m << ":" << s << endl;
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}
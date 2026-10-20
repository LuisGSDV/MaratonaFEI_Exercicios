#include <bits/stdc++.h>

using namespace std;
 
int main() {
    
    int N, cem, div100, cqnt, div50, vnt, div20, dez, div10, cinco, div5, dois, div2, um;
    
    cin >> N;
    
    cem = N / 100;
    div100 = N %100;
    
    cqnt = div100/50;
    div50 = div100%50;
    
    vnt = div50/20;
    div20 = div50%20;
    
    dez = div20/10;
    div10 = div20%10;
    
    cinco = div10/5;
    div5 = div10%5;
    
    dois = div5/2;
    div2= div5%2;
    
    um = div2;

    cout << N << endl;
    cout << cem << " nota(s) de R$ 100,00" << endl;
    cout << cqnt << " nota(s) de R$ 50,00" << endl;
    cout << vnt << " nota(s) de R$ 20,00" << endl;
    cout << dez << " nota(s) de R$ 10,00" << endl;
    cout << cinco << " nota(s) de R$ 5,00" << endl;
    cout << dois << " nota(s) de R$ 2,00" << endl;
    cout << um << " nota(s) de R$ 1,00" << endl;
    
    return 0;
}
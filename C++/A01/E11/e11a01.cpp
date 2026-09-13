#include <bits/stdc++.h>

using namespace std; 

int main (){
    string ns;
    double ss, tss, ts;
    
    cin >> ns;
    cin >> ss >> ts;
    ts = ss + ts * 0.15;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << ts << endl;

    return 0;

}

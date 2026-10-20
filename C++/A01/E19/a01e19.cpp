#include <bits/stdc++.h>

using namespace std;

int main(){
    int hr, asp, km = 12;
    float rstd, dist;

    cin >> hr;
    cin >> asp;

    dist = hr * asp;

    rstd = dist / 12;


    cout << fixed << setprecision(3);
    cout << rstd << endl;

    return 0;
}
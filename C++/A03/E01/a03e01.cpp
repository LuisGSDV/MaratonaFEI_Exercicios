#include <bits/stdc++.h>

using namespace std;

int main(){
    int i = 0, pos = 0;
    double med = 0.0, n[6];

    for(i = 0; i < 6; i++ ){
        cin >> n[i];
        if(n[i] > 0.0){
            med += n[i];
            pos++;
        }

    }

    med = med / pos;

    cout << pos << " valores positivos" << endl;
    cout << setprecision(2) << med << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b, c, nota;

    cin >> a >> b >> c;

    if( a<= 10 and a>=0 and b<= 10 and b>= 0 and c<= 10 and c>= 0){

        nota = ((a * 2.0)+(b * 3.0)+(c * 5.0))/10.0;
        cout << "MEDIA = " << fixed << setprecision(1) << nota << endl;
    }

    return 0; 
}
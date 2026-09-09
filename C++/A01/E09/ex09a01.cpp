#include <bits/stdc++.h>

using namespace std;

int main (){
    int nf, hf;
    double hs, sal;

    cin >> nf >> hf >> hs;
    sal = hf * hs;

    cout << "NUMBER = " << nf << endl << "SALARY = U$ " << fixed << setprecision(2) << sal << endl;

    return 0;

}
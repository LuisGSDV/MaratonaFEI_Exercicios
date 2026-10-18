#include <bits/stdc++.h>

using namespace std;

int main(){
    int R;
    double area, pi = 3.14159;

    cin >> R;

    area = (4.0/3) * pi * pow(R, 3);

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << area << endl;

    return 0;
}
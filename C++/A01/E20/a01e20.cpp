#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, ano, rano, mes, dia;

    cin >> N;

    ano = N/365;
    rano = N%365;

    mes = rano /30;
    dia = rano %30;

    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;

    return 0;
}
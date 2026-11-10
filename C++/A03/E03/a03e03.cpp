#include <bits/stdc++.h>

using namespace std;

int main(){
    int n[5];
    int par = 0, imp = 0, pos = 0, neg =0;

    for(int i = 0; i < 5; i++){
        cin >> n[i];

        if(n[i] % 2 == 0){
            par++;
        }else{
            imp++;
        }

        if(n[i] > 0){
            pos++;
        }else if(n[i] < 0){
            neg++;
        }
    }

    cout << par << " valor(es) par(es)" << endl;
    cout << imp << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;

    return 0;
}

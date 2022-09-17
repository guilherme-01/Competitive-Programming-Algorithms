#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n; cin >> n; ll lista[11]; lista[0] = n;
    cout << "N[" << 0 << "] = " << n << endl;
    for(int i = 1; i<=10; i++){
        lista[i] = lista[i-1] + lista[i-1];
        cout << "N[" << i << "] = " << lista[i] << endl;
    }
}
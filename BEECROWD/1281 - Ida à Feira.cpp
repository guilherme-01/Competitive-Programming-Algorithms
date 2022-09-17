#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        map <string, double> mapa;
        int n2; cin >> n2;
    for(int i = 1; i <= n2; i++){
        string p; cin >> p; double v; cin >> v;
        mapa[p] = v;
    }
    double resp = 0;
    int num; cin >> num;
    for(int i = 1; i <= num; i++){
        string nome; cin >> nome; double quant; cin >> quant;
        resp += mapa[nome] * quant;
    }
    cout << fixed << setprecision(2);
    cout <<"R$ " << resp << endl;
    }
    return 0;
}
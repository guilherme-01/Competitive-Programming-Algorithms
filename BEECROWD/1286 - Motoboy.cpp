#include <bits/stdc++.h>
using namespace std;
int val[35][25];
int pd[35][25];

int n;
pair <int, int> lista[25];

int motoboy(int maxP, int pAtual){
    if(maxP < 0){return -99999999;}
    if(pAtual == n){return 0;}
    if(pd[maxP][pAtual]){return val[maxP][pAtual];}
    int entregar = lista[pAtual].first + motoboy(maxP - lista[pAtual].second, pAtual+1);
    int nEntregar = motoboy(maxP, pAtual+1);
    if(!pd[maxP][pAtual]){val[maxP][pAtual] = max(entregar, nEntregar);}
    return max(entregar, nEntregar);
}
int main(){int maxPizzas;
    while(cin >> n && n){ cin >> maxPizzas;
        for(int i = 0, min, p; i<n; i++){
            cin >> min >> p; lista[i].first = min; lista[i].second = p;
        }
        cout << motoboy(maxPizzas, 0) << " min." << endl;
    }
    return 0;
}
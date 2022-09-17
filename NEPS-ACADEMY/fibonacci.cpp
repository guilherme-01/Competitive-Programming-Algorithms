#include <bits/stdc++.h>
using namespace std;
int memo[35];
int lista[35];
int fib(int atual){
    if(atual == -1){return 1;}
    if(atual == 2){ lista[atual] = 3;
        return 3;}
    if(memo[atual]){return lista[atual];}
    lista[atual] = fib(atual-1) + fib(atual-2);
    memo[atual] = 1;
    return lista[atual];
}
int main(){
    int n; cin >> n; lista[0] = 1; lista[1] = 2;
    memo[0] = 1; memo [1] = 1;
    cout << fib(n-1) << endl;
}
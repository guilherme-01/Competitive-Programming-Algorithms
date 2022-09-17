#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lista[61];

void todosOsFibsAte60(){
    int i = 2;
    while(i<=60){
        lista[i] = lista[i-1] + lista[i-2];
        i++;
    }
}
int main(){
    lista[1] = 1; 
    todosOsFibsAte60();
    int t; scanf("%d\n", &t);
    while(t--){
        int n; scanf("%d\n", &n);
        cout << "Fib(" << n << ") = " << lista[n] << endl;
    }
    return 0;
}
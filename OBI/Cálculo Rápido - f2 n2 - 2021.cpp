#include <bits/stdc++.h>
using namespace std;
int somaDigitos(int x){
    int soma = 0;
    while(true){ 
        if(x >= 10){
            soma += x%10;
            x = x/10;
        }else{
            soma += x; break;
        }
    }
    return soma;
}
int main(){
    int s, a, b; cin >> s >> a >> b; 
    int sDigitos = 0;
    for(int i = a; i <= b; i++){
        if(somaDigitos(i) == s){sDigitos++;}
    }
    cout << sDigitos << endl;
    return 0;
}
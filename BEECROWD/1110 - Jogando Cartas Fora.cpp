#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; 
    while(cin >> n && n){
    queue<int>fila;
    for(int i=1; i<=n; i++){
        fila.push(i);
    }
    int cont = 1; cout << "Discarded cards: ";
    while(cont < n){
        if(cont < 2){cout << fila.front();} else{
            cout << ", " << fila.front();
        }
        fila.pop();
        fila.push(fila.front());
        fila.pop();
        cont++;
    }
    cout << endl << "Remaining card: " << fila.back() << endl;
   }
    return 0;
}
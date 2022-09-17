#include <bits/stdc++.h>
using namespace std;
string cifra(string letras, int n){
        for(int i=0; i<letras.size(); i++){
            if((letras[i]-n) >= 'A' && letras[i]-n <= 'Z'){
                letras[i] -= n;
            }else{
                for(int j=0; j<n; j++){
                    if(isalpha(letras[i]-1)){
                        letras[i] -= 1;
                    }else{
                        letras[i] = 'Z';
                    }
                }
            }
        }
    return letras;
}
int main(){
    int t; cin >> t; 
    while(t--){
        string letras; cin >> letras;
        int n; cin >> n;
        letras = cifra(letras, n);
        cout << letras << endl;
    }
    return 0; 
}
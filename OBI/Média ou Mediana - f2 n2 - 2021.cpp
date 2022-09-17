#include <bits/stdc++.h>
using namespace std;
int main(){
    double a, b; cin >> a >> b; 
    double c = a; double media; double mediana = a;
    while(true){
        media = (c + a + b)/3;
        if(media == mediana){
            cout << c << endl;
            break;
        }
        c = c - 1;
    }
    return 0;
}
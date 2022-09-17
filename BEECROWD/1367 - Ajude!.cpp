#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    while(cin >> n && n){
        map <string, pair<int, int>> mapa;
        while(n--){
            string ind; int p; string s; cin >> ind >> p >> s;
            if(s == "incorrect"){
                mapa[ind].second = 0;
                } 
                else{
                mapa[ind].second = 1; 
                }
            if(!mapa[ind].second){
                mapa[ind].first += 20;
            }else{
                mapa[ind].first += p;
            }
        }
        int certas = 0;
        int total = 0;
        for(auto i: mapa){
            if(i.second.second){
                certas += 1;
                total += i.second.first;
            }
        }
        cout << certas << " " << total << endl;
    }
    return 0;
}
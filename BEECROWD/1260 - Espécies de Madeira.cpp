#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin >> n; 

    string emptyLine; cin >> emptyLine;

    map <string, double> mapa;
    
    string s; 
    int inSize = 0;
    while(getline(cin, s) && s != ""){
        mapa[s], inSize += 1; 
    }
    cout << fixed << setprecision(4); 
    for(auto x: mapa){
        x.second = float(100/29) * x.second;
        cout << x.first << x.second << " " << endl;
    }
    return 0; 
}

/*
Red Alder
Ash
Aspen
Basswood
Ash
Beech
Yellow Birch
Ash
Cherry
Cottonwood
Ash
Cypress
Red Elm
Gum
Hackberry
White Oak
Hickory
Pecan
Hard Maple
White Oak
Soft Maple
Red Oak
Red Oak
White Oak
Poplan
Sassafras
Sycamore
Black Walnut
Willow
*/
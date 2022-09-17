#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, int>mapa; string joias;
    while(getline(cin, joias) && joias != "\n"){
        mapa[joias] = 1;
    }
    cout << mapa.size() << endl;
}
/*
esse "1" não serve para nada, o principal parâmetro é a chave;
basicamante quando eu uso o "mapa[joias]"" ele cria uma nova chave
se já não houver uma e atribui o valor "1", se já houver uma
chave com o mesmo nome da atual entrada ele só atribui o valor "1"
novamente, ou seja, o size do mapa só aumenta se não houver uma
chave == joias."
*/
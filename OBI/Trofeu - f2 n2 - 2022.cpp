#include <bits/stdc++.h>
using namespace std;
int maior = -1; 
int segundoMaior = -1;
int main(){
    int vetor[5];
    for(int i = 0; i<5; i++){
        int num; cin >> num; vetor[i] = num;
        maior = max(num, maior);
    }
    for(int i = 0; i<5; i++){
        if(vetor[i] < maior){
            segundoMaior = max(segundoMaior, vetor[i]);
        }
    }
    int trofeus = 0;
    int placas = 0;
    for(int i = 0; i<5; i++){
        if(vetor[i] == maior){trofeus += 1;}
        if(vetor[i] == segundoMaior){placas += 1;}
    }
    cout << trofeus << " " << placas << endl;
        return 0;
}
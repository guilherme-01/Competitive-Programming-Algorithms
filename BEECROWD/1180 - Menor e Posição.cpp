#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vetor; 
    int n; cin >> n; 
    int menor = 99999; int posicao;
    for(int i=0; i<n; i++){
        int nums; cin >> nums; vetor.push_back(nums);
        if(nums < menor){
            menor = nums; posicao = i;
        }
    }
    cout << "Menor valor: " << menor << "\n" << "Posicao: " << posicao << endl;
    return 0;
}
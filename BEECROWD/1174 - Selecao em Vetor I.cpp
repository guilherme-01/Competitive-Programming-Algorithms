#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 100; double arr[n];
    for(int i = 0; i<n; i++){
        double nums; cin >> nums; arr[i] = nums; 
        if(nums <= 10){
            cout << fixed << setprecision(1) << "A[" << i << "] = " << arr[i] <<"\n";
        }
    }
    return 0;
}
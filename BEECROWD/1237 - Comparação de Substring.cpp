#include <bits/stdc++.h>
using namespace std;

string a; string b;

int sub(int i, int j){
    int seq = 0;
    while (i < a.size() && j < b.size() && a[i] == b[j])
    {
        i++; 
        j++;
        seq++;
    }
    return seq;
}
int main(){
    while (getline(cin, a) && getline(cin, b))
    {
        int ans = 0;
        for(int i = 0; i < a.size(); i++) 
        {
            for(int j = 0; j <= b.size(); j++)
            {
                ans = max(ans, sub(i, j));
            }
        }
        cout << ans << endl;
    }
    return 0;
}
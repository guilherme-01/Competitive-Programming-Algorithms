#include <bits/stdc++.h>
using namespace std; 

int main () 
{
    int n; cin >> n; 

    int ans = 0; 

    typedef struct
    {
        int num; 
        char pe;
        bool tem_par = false;
    } bota;

    bota botas[n]; 

    for (int i = 0; i < n; i++) 
    {
        cin >> botas[i].num; 
        cin >> botas[i].pe; 
    }
    for (int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            if (botas[i].tem_par == false && botas[j].tem_par == false) 
            {
                if(
                    (botas[i].num == botas[j].num) &&
                    (botas[i].pe != botas[j].pe)
                  ) 
                    {
                        ans += 1; 
                        botas[i].tem_par = true; 
                        botas[j].tem_par = true;
                    }
            }
        }
    }
    cout << ans << endl; 
    return 0; 
}
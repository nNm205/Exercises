#include<bits/stdc++.h>
using namespace std;

string f[11];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    f[0] = "a";
    f[1] = "b";
    for(int i = 0; i <= 10; i++){
        if(i < 2) cout << f[i] << '\n';
        else{
            f[i] = f[i-1] + f[i-2];
            cout << f[i] << '\n';
        }
    }
    return 0;
}



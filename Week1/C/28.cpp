#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    for(int i = 0; i <= 23; i++){
        if(i == 0) cout << "12 midnight" << '\n';
        else if(i < 12) cout << i << "am" << '\n';
        else if(i == 12) cout << "12 noon" << '\n';
        else cout << i%12 << "pm" << '\n';
    }
    return 0;
}



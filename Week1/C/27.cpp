#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    while(cin >> n){
        if(n == -1){
            cout << "Bye";
            break;
        }
        else{
            if(n >= 0 && n % 5 == 0) cout << n/5 << '\n';
            else cout << -1 << '\n';
        }
    }
    return 0;
}



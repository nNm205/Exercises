#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, pre = -1;
    while(cin >> n){
        if(n < 0){
            cout << n;
            break;
        }
        else{
            if(n == pre) continue;
            else cout << n << ' ';
            pre = n;
        }
    }
    return 0;
}



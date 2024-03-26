#include<bits/stdc++.h>
using namespace std;

int n;
char s[101];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++) cin >> s[i];
    bool ok = true;
    for(int i = 0; i < n; i++){
        if(s[i] != s[n - i - 1]){
            ok = false;
            break;
        }
    }

    if(ok) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int a, b, f[N];

bool check(int n){
    string number = to_string(n);
    for(int i = 0; i < number.size()/2; i++){
        if(number[i] != number[number.size()-i-1]) return false;
    }
    return true;
}

void pre(){
    for(int i = 0; i <= N; i++){
        if(i < 10) f[i] = i+1;
        else f[i] = f[i-1] + check(i);
    }
}

void solve(){
    cin >> a >> b;
    if(a == 0) cout << f[b] << '\n';
    else cout << f[b] - f[a-1] << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    pre();
    while(t--){
        solve();
    }
    return 0;
}
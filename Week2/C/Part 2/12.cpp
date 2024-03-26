#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    int t = sqrt(n);
    if(t*t == n) cout << "TRUE";
    else cout << "FALSE";
    return 0;
}



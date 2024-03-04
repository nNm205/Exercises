#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int a, b; cin >> a >> b;
    if(a % 7 == 0 && b % 7 == 0) cout << "true";
    else cout << "false";
    return 0;
}



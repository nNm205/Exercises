#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int a, b;
    cin >> a >> b;
    int gcd = __gcd(a, b);
    cout << a/gcd * b;
    return 0;
}




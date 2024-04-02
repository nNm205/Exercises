#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(!b) return a;
    return gcd(b, a%b);
}

int main(){
    int a, b;
    cin >> a >> b;
    if(gcd(a, b) == 1) cout << a << " va " << b << " la hai so nguyen to cung nhau" << '\n';
    else cout << gcd(a, b);
    return 0;
}

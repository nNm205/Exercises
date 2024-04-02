#include<bits/stdc++.h>
using namespace std;

int n;

string convert(int n){
    string res = "";
    while(n > 0){
        res = (char)(n%2 + '0') + res;
        n /= 2;
    }
    return res;
}

int main(){
    cin >> n;
    cout << convert(n);
    return 0;
}


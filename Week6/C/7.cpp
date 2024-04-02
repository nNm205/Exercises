#include<bits/stdc++.h>
using namespace std;

int n;

void Print(int m, int n){
    for(int i = 1; i <= m; i++) cout << ' ';
    for(int i = 1; i <= n; i++) cout << '*';
    cout << '\n';
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        Print(n-i, 2*i-1);
    }
    return 0;
}

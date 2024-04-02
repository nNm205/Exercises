#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

int n;
int main(){
    cin >> n;
    if(isPrime(n)) cout << 1;
    else cout << 0;
    return 0;
}

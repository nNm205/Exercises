#include<bits/stdc++.h>
#define ll long long

using namespace std;

int number;

bool Prime(int number){
    if(number < 2) return false;
    for(int i = 2; i <= sqrt(number); i++){
        if(number % i == 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> number;
    if(Prime(number)) cout << "yes";
    else cout << "no";
    return 0;
}

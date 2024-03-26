#include<bits/stdc++.h>
#define ll long long

using namespace std;

int number;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> number;
    for(int i = 1; i <= number; i++){
        for(int j = 1; j <= number-i; j++) cout << " ";
        for(int j = 1; j <= i*2-1; j++) cout << "*";
        cout << '\n';
    }
    return 0;
}

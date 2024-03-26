#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll money;
    cin >> money;
    for(int i = 1; i <= 12; i++) money += round((double)money/50.0);
    cout << money;
    return 0;
}




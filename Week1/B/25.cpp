#include<bits/stdc++.h>
using namespace std;

int a[6];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    for(int i = 1; i <= 5; i++) cin >> a[i];
    sort(a+1, a+6);
    cout << a[3];
    return 0;
}



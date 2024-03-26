#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int x, y, z;
    cin >> x >> y >> z;
    bool b = false;
    if(x < y && y < z) b = true;
    cout << b;
    return 0;
}



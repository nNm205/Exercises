#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int x, y; cin >> x >> y;
    x = (double)x;
    y = (double)y;
    double distance = sqrt(x*x + y*y);
    cout << distance;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    double a, b, c;
    cin >> a >> b >> c;
    double p = (a + b + c)/(double)2;
    double area = sqrt(p * (p-a) * (p-b) * (p-c));
    cout << area;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int year;
    cin >> year;
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) cout << "true";
    else cout << "false";
    return 0;
}



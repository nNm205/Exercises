#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // FOR
    for(int i = 1; i <= 100; i++){
        if(i % 2) continue;
        cout << i << ' ';
    }

    cout << '\n';
    // WHILE
    int i = 2;
    while(i <= 100){
        if(i % 2 == 0){
            cout << i << ' ';
            i += 2;
        }
    }

    cout << '\n';
    // DO-WHILE
    i = 2;
    do{
        cout << i << ' ';
        i += 2;
    }
    while(i <= 100);
    return 0;
}




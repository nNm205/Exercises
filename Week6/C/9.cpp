#include<bits/stdc++.h>
using namespace std;

int n;
int main(){
    srand(time(NULL));

    cin >> n;
    int x = rand() % (n-1);
    cout << x;
    return 0;
}

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n, a[1007], Min = INT_MAX, Max = INT_MIN;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        Min = min(Min, a[i]);
        Max = max(Max, a[i]);
    }

    cout << "Min = " << Min << '\n';
    cout << "Max = " << Max << '\n';
    return 0;
}



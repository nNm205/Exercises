#include<bits/stdc++.h>
using namespace std;

int n, a[107], mini = INT_MAX, maxi = INT_MIN;
double mean = 0.0;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        mini = min(mini, a[i]);
        maxi = max(maxi, a[i]);
        mean += (double)a[i];
    }
    mean = mean/(double)n;

    cout << mean << '\n';
    cout << maxi << '\n';
    cout << mini << '\n';
    return 0;
}



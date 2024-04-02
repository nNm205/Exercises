
#include<bits/stdc++.h>
using namespace std;

int n, a[107];

int main(){
    srand(time(NULL));

    cin >> n;
    for(int i = 1; i <= n; i++){
        a[i] = rand() % 49;
    }

    for(int i = 1; i <= n; i++){
        cout << a[i] << ' ';
    }

    cout << '\n';
    for(int i = 1; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            for(int k = j+1; k <= n; k++){
                if((a[i]+a[j]+a[k]) % 25 == 0){
                    cout << a[i] << ' ' << a[j] << ' ' << a[k] << '\n';
                }
            }
        }
    }
    return 0;
}

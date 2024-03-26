#include<bits/stdc++.h>
using namespace std;

int n, m;
char a[10][10];
int dx[] = {-1, -1, -1, +0, +0, +1, +1, +1};
int dy[] = {-1, +0, +1, -1, +1, -1, +0, +1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == '.'){
                int cnt = 0;
                for(int k = 0; k < 9; k++){
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if(ni < 1 || nj < 1 || ni > n || nj > m) continue;
                    if(a[ni][nj] == '*') cnt++;
                }
                cout << cnt << ' ';
            }
            else cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
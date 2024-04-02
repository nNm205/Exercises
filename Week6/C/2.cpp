#include<bits/stdc++.h>
using namespace std;

int n, m, k, cntGuessed;
int dx[] = {-1, -1, -1, +0, +0, +1, +1, +1};
int dy[] = {-1, +0, +1, -1, +1, -1, +0, +1};

char a[17][17], b[17][17];

int main(){
    srand(time(NULL));
    cin >> n >> m >> k;
    cntGuessed = n*m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            a[i][j] = '0';
            b[i][j] = '*';
        }
    }

    int i = 1;
    while(i <= k){
        int x = rand() % n + 1;
        int y = rand() % m + 1;
        if(a[x][y] == '1') continue;
        else{
            a[x][y] = '1';
            i++;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

    bool isRunning = true;
    while(isRunning){
        int x, y;
        cout << "Enter the coordinates of the cell you think has no mines: " << '\n';
        cout << "Enter x = ";
        cin >> x;
        cout << "Enter y = ";
        cin >> y;
        if(a[x][y] == '0'){
            cntGuessed--;
            int cntBoom = 0;
            for(int k = 0; k < 8; k++){
                int nx = x + dx[k];
                int ny = y + dy[k];
                if(nx < 1 || ny < 1 || nx > n || ny > m) continue;
                if(a[nx][ny] == '1') cntBoom++;
            }
            b[x][y] = (char)(cntBoom + '0');
            if(cntGuessed == k){
                cout << "You Win!!!" << '\n';
                for(int i = 1; i <= n; i++){
                    for(int j = 1; j <= m; j++){
                        cout << b[i][j] << ' ';
                    }
                    cout << '\n';
                }
                isRunning = false;
            }
            else{
                for(int i = 1; i <= n; i++){
                    for(int j = 1; j <= m; j++){
                        cout << b[i][j] << ' ';
                    }
                    cout << '\n';
                }
            }
        }
        else{
            cout << "YOU'RE DEAD!" << '\n';
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= m; j++){
                    cout << a[i][j] << ' ';
                }
                cout << '\n';
            }
            isRunning = false;
        }
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int a[37];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    srand(time(0));
    cout << '\n';
    cout << "Original array: " << "        ";
    for(int i = 1; i <= 30; i++){
        a[i] = rand() % 100;
        cout << a[i] << ' ';
    }

    cout << '\n' << '\n';
    for(int i = 1; i <= 30; i++){
        for(int j = i + 1; j <= 30; j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
    }

    cout << "After using Buble Sort: ";
    for(int i = 1; i <= 30; i++) cout << a[i] << ' ';
    cout << '\n';
    return 0;
}

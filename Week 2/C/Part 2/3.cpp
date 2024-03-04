#include<bits/stdc++.h>
using namespace std;

int a[4];

bool tamgiac(int a, int b, int c){
    if(a+b > c) return true;
    else return false;
}

bool vuong(int a, int b, int c){
    if(a*a + b*b == c*c) return true;
    else return false;
}

bool can(int a, int b, int c){
    if(a == b && b != c) return true;
    else return false;
}

bool deu(int a, int b, int c){
    if(a == b && b == c) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    for(int i = 1; i <= 3; i++) cin >> a[i];
    sort(a+1, a+4);

    if(tamgiac(a[1], a[2], a[3])){
        cout << a[1] + a[2] + a[3] << '\n';
        if(deu(a[1], a[2], a[3])){
            cout << "Tam giac la tam giac deu" << '\n';
        }
        else if(vuong(a[1], a[2], a[3])){
            if(can(a[1], a[2], a[3])){
                cout << "Tam giac la tam giac vuong can" << '\n';
            }
            else cout << "Tam giac la tam giac vuong" << '\n';
        }
        else if(can(a[1], a[2], a[3])){
            cout << "Tam giac la tam giac can" << '\n';
        }
        else cout << "Tam giac la tam giac thuong" << '\n';
    }
    return 0;
}




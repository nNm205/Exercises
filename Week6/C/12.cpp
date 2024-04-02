#include<bits/stdc++.h>
using namespace std;

int k[27], n[27], j;

int Kiemtra(int k, int n){
    if((1 <= n && n <= 20) && (0 <= k && k <= n)) return 1;
    else return 0;
}

void nhapKN(int k[], int n[], int* soPhanTu){
    int nK, nN;
    *soPhanTu = 0;
    while(cin >> nK >> nN){
        if(nK == -1 && nN == -1) return;
        if(Kiemtra(nK, nN)){
            (*soPhanTu)++;
            k[(*soPhanTu)] = nK;
            n[(*soPhanTu)] = nN;
        }
    }
}

int toHop(int k, int n){
    if(k == 0 || k == n) return 1;
    if(k == 1 || k == n-1) return n;
    return toHop(k-1, n-1) + toHop(k, n-1);
}

int main(){
    nhapKN(k, n, &j);
    for(int i = 1; i <= j; i++){
        cout << toHop(k[i], n[i]) << '\n';
    }
    return 0;
}



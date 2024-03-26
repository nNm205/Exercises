#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    double DTB = 0.0, tongHeso = 0.0;
    cout << "Tong so mon hoc can tinh DTB: " << n << '\n';
    for(int i = 1; i <= n; i++){
        double diem, heso;
        cin >> diem >> heso;
        tongHeso += heso;
        cout << "Diem mon hoc " << i << ": " << diem << '\n';
        cout << "He so mon hoc " << i << ": " << heso << '\n';
        DTB += diem*heso;
    }
    cout << "So mon hoc: " << n << '\n';
    cout << "Tong so he so: " << tongHeso << '\n';
    DTB /= (double)tongHeso;
    cout << "Diem trung binh cua " << n << " mon hoc: " << DTB;
    return 0;
}

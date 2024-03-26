#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    double a, b, c;
    cin >> a >> b >> c;
    double delta = b*b - 4*a*c;
    if(delta > 0){
        cout << "Phuong trinh co 2 nghiem phan biet la: " << '\n';
        cout << "x1 = " << (double)(-b + sqrt(delta))/2.0*a << '\n';
        cout << "x2 = " << (double)(-b - sqrt(delta))/2.0*a << '\n';
    }
    else if(delta == 0){
        cout << "Phuong trinh co nghiem kep la: " << '\n';
        cout << "x = " << (double)(-b/2.0*a) << '\n';
    }
    else{
        cout << "Phuong trinh co 2 nghiem phuc la: " << '\n';
        cout << "x1 = " << (double)(-b/(2.0*a)) << " + " << (double)sqrt(-delta)/(2.0*a) << "i" << '\n';
        cout << "x2 = " << (double)(-b/(2.0*a)) << " - " << (double)sqrt(-delta)/(2.0*a) << "i" << '\n';
    }
    return 0;
}

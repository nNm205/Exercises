#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cout << "Fahrenheit" << "     " << "Celcius" << "     " << "Absolute" << '\n';
    for(int f = 0; f <= 300; f += 20){
        double c = (double)(f - 32) * (double)5.0/9.0;
        double k = c + 273.15;
        cout << f << "     ";
        cout << fixed << setprecision(2) << c << "     ";
        cout << fixed << setprecision(2) << k << '\n';
    }
    return 0;
}



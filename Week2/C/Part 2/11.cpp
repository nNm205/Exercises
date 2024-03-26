#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int Min, Max, Step_size;
    cin >> Min >> Max >> Step_size;
    cout << "Fahrenheit" << "     " << "Celcius" << "     " << "Absolute" << '\n';
    for(int f = Min; f <= Max; f += Step_size){
        double c = (double)(f - 32) * (double)5.0/9.0;
        double k = c + 273.15;
        cout << f << "     ";
        cout << fixed << setprecision(2) << c << "     ";
        cout << fixed << setprecision(2) << k << '\n';
    }
    return 0;
}



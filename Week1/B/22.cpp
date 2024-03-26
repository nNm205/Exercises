#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    double weight, height;
    cin >> weight >> height;
    double BMI = weight / ((height/(double)100)*(height/(double)100));
    cout << BMI;
    return 0;
}



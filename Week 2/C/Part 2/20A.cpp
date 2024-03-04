#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int workingHours;
    cin >> workingHours;
    ll time = 1, salary = 0;
    while(time <= workingHours){
        if(time <= 100) salary += 12000;
        else if(time <= 150) salary += 16000;
        else if(time <= 200) salary += 20000;
        else salary += 25000;
        time++;
    }

    cout << salary;
    return 0;
}



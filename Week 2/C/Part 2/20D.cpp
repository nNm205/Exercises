#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll calSalary(ll workingHours){
    ll time = 1, salary = 0;
    while(time <= workingHours){
        if(time <= 100) salary += 12000;
        else if(time <= 150) salary += 16000;
        else if(time <= 200) salary += 20000;
        else salary += 25000;
        time++;
    }

    ll newSalary = (salary * 91)/100, tax = 0;
    if(newSalary <= 1000000) return newSalary;
    else{
        if(newSalary >= 2000000) tax += 500000/4 + (newSalary - 2000000)/5;
        else tax += (salary - 1000000)/10;
        newSalary -= tax;
        return newSalary;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll debt = 10000000;
    ll salary = calSalary(155) + 1500000 - 2000000;

    ll month = 0;
    while(debt > 0){
        cout << "month #" << month << ":" << ' ';
        cout << "[debt = " << debt << "]" << ' ';
        cout << "[salary = "<< salary << "]" <<'\n';
        debt += round((double)debt/50.0);
        debt -= salary;
        month++;
    }

    cout << month;
    return 0;
}

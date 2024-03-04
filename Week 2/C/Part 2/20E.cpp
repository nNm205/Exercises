#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll calSalary(ll workingHours){
    ll time = 1, salary = 0, tax = 0;
    while(time <= workingHours){
        if(time <= 100) salary += 12000;
        else if(time <= 150) salary += 16000;
        else if(time <= 200) salary += 20000;
        else salary += 25000;
        time++;
    }

    salary = (salary * 91)/100;
    if(salary <= 1000000) return salary;
    else{
        if(salary >= 2000000) tax += 500000/4 + (salary - 2000000)/5;
        else tax += (salary - 1000000)/10;
        salary -= tax;
        return salary;
    }
}

ll debt = 10000000, day = 0;
ll workingHours[] = {155, 145, 125, 135, 100, 100, 145, 135, 100, 155, 170, 180};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll i = 0, month = 0;
    while(debt > 0){
        ll salary = calSalary(workingHours[i]);
        cout << "month #" << month << ":" << ' ';
        cout << "[debt = " << debt << "]" << ' ';
        cout << "[salary = "<< salary << "]" <<'\n';
        debt += round((double)debt/50.0);
        debt -= salary;
        i++;
        month++;
    }
    cout << month;
    return 0;
}

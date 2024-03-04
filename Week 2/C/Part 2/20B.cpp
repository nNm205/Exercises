#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int salary, tax = 0;
    cin >> salary;
    int newSalary = (salary * 91)/100;
    if(newSalary <= 1000000) cout << newSalary << '\n';
    else{
        if(newSalary >= 2000000) tax += 500000/4 + (newSalary - 2000000)/5;
        else tax += (salary - 1000000)/10;
        newSalary -= tax;
        cout << "New Salary after applying taxes:" << newSalary << '\n';
    }
    return 0;
}




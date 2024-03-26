#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x, y;
    Point(){};
    Point(int _x, int _y){
        x = _x;
        y = _y;
    }
};

void print1(Point a){
    cout << &a << '\n';
}

void print2(const Point& a){
    cout << &a << '\n';
}

int main(){
    Point a(2, 3);
    cout << "Address: " << &a << '\n';
    cout << "Address after pass by value in function: ";
    print1(a);
    cout << "Address after pass by reference in function: ";
    print2(a);
    return 0;
}

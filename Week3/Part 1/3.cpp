#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x, y;
};

void Print(Point p){
    cout << p.x << ' ' << p.y;
}

Point mid_point(const Point &a, const Point &b){
    Point ans;
    ans.x = (a.x + b.x)/2;
    ans.y = (a.y + b.y)/2;
    return ans;
}

int main(){
    Point a, b;
    a.x = 21;
    a.y = 9;
    b.x = 11;
    b.y = 1;
    Print(mid_point(a, b));
    return 0;
}



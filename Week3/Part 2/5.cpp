#include<bits/stdc++.h>
using namespace std;

struct Point{
    int i, j;
    Point(int _i, int _j){
        i = _i;
        j = _j;
    }

    void print(){
        cout << i << ' ' << j << '\n';
    }
};

struct Rect{
    int x, y, w, h;
    Rect(int _x, int _y, int _w, int _h){
        x = _x;
        y = _y;
        w = _w;
        h = _h;
    }

    bool contains(const Point& a){
        if(a.i >= x && a.i <= x+h && a.j >= y && a.j <= y+w) return true;
        else return false;
    }
};


int main(){
    Point a(4, 1);
    Rect rect(1, 5, 4, 2);
    if(rect.contains(a)) cout << "a is in rect" << '\n';
    else cout << "a is not in rect" << '\n';
    return 0;
}

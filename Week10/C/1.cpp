#include<bits/stdc++.h>
using namespace std;

struct String {
    int n;
    char* str;
    String(const char* _str){
        n = strlen(_str);
        str = new char[n+1];
        strcpy(str, _str);
    }

    ~String(){
        delete[] str;
    }

    void print(){
        cout << str << '\n';
    }

    void append(const char* _str){
        int n1 = strlen(_str);
        n = n + n1 + 1;
        char* temp = new char[n];
        strcpy(temp, str);
        strcat(temp, _str);
        str = new char[n];
        strcpy(str, temp);
        delete[] temp;
    }
};

int main(){
    String s("Hello");
    s.print();
    s.append(" Minh");
    s.print();
    return 0;
}

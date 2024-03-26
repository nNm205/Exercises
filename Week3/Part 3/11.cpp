#include<bits/stdc++.h>
using namespace std;

struct String {
   char* arr;
   int length;

   String(const char* _s) {
      length = strlen(_s);
      arr = new char[length];
      strncpy(arr, _s, length);
   }

   ~String() {
      delete [] arr;
   }

   void print() {
      cout << arr;
   }
};

int main(){
    String s("Hi");
    s.print();
    return 0;
}



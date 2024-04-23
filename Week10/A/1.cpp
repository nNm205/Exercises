#include<bits/stdc++.h>
using namespace std;

char* concat(const char* a, const char* b){
    int n = strlen(a);
    int m = strlen(b);
    char* ans = new char[n + m + 1];
    strcpy(ans, a);
    strcat(ans, b);
    return ans;
}

int main(){
    char* a = "Hello";
    char* b = " Minh!!!";
    char* ans = concat(a, b);
    cout << ans;
    return 0;
}

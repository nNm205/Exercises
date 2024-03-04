#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    double a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if(a2*b1 - a1*b2 == 0){
        if(a2*c1 - a1*c2 == 0) cout << "Phuong trinh co vo so nghiem" << '\n';
        else cout << "Phuong trinh vo nghiem" << '\n';
    }
    else{
       double noy = (a2*c1 - a1*c2)/(a2*b1 - a1*b2);
       if(a1 == 0){
            if(c1 - b1*noy == 0) cout << "Phuong trinh co vo so nghiem" << '\n';
            else cout << "Phuong trinh vo nghiem" << '\n';
       }
       else{
           cout << "Phuong trinh co 1 nghiem (x, y) la: " << '\n';
           cout << "x = " << (double)(c1 - b1*noy)/a1 << '\n';
           cout << "y = " << noy << '\n';
       }
    }

    return 0;
}




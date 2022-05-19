#include <iostream>
using namespace std;
#include "cmath"

float f (float y){
    float f;
    f = (y*y*cos(y))+1;
    return f;
}

bool prima(float a, float b){
    if(f(a)*f(b)>=0){
        return true;
    }else{
        return false;
    }
}



int main() {
    
    float a,b,x,err;
    do {
        cout << "inserire estremi";
        cin >> a;
        cin >> b;
    }while(prima(a,b)==1);
    a=(a+b)/2;
    do{
        if(f(a)==0){
            cout<<int(x*10000)/10000.0<<endl;
        }else {
            if (f(a) * f(b) < 0) {
                a = x;
            } else {
                b = x;
            }
            err = abs((b - a) / 2);
        }
    }while(err>=1e-6);
    cout<<int(x*10000)/10000.0<<endl;
    return 0;
}

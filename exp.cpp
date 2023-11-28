#include<bits/stdc++.h>
using namespace std;

double e(int x,int n){
    double out=0;
    for(int a=0;a<n;a++){
        double t2=pow(x,a);
        long long t1=1;
        for(int b=1;b<=a;b++){
            t1=t1*b;
        }
        t2/=t1;
        out+=t2;
    }
    return out;
}
int main(){
    cout<<e(3,20)<<endl;
}
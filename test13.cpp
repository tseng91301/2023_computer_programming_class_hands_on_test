#include<bits/stdc++.h>
using namespace std;
int d(int in){
    if(in==1){
        return 1;
    }
    int out=0;
    for(int a=1;a<in;a++){
        if(!(in%a)){
            out+=a;
        }
    }
    return out;
}
int main(){
    int sum=0;
    cout<<d(220)<<" "<<d(284)<<endl;
    for(int a=1;a<=10000;a++){
        int da=d(a);
        if(a==d(da)&&a!=da){
            sum+=a;
            cout<<a<<" "<<da<<endl;
        }
    }
    cout<<sum<<endl;
    cout<<endl;
}
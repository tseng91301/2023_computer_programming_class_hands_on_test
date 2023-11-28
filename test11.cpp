#include<bits/stdc++.h>
using namespace std;
int power(int x,int y){
    int out=1;
    for(int a=0;a<y;a++){
        out*=x;
    }
    return out;
}
int dadd(int in){
    int o=0;
    string t1=to_string(in);
    int l=t1.length();
    for(int a=0;a<l;a++){
        int t2=power(t1[a]-48,l);
        //cout<<int(t1[a]-48)<<" "<<l<<" "<<t2<<endl;
        o=o+t2;
    }
    return o;
}
int main(){
    for(int a=100;a<=99999;a++){
        if(a==dadd(a)){
            cout<<a<<", ";
        }
    }
    cout<<endl;
}
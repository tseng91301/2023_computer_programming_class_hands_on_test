#include<bits/stdc++.h>
using namespace std;
int chain(int in){
    int out=1;
    while(in!=1){
        if(in%2){
            in=in*3+1;
        }else{
            in/=2;
        }
        out++;
    }
    return out;
}
int main(){
    int biggest=0;
    int bn=0;
    for(int a=1;a<=10000;a++){
        if(chain(a)>biggest){
            biggest=chain(a);
            bn=a;
        }
    }
    cout<<bn<<endl;
    cout<<biggest<<endl;
}
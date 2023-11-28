#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int a=1;a<=10000;a++){
        int t1=a;
        int t=0;
        while(t1!=1){
            t++;
            if(t1%2){
                t1=t1*3+1;
            }else{
                t1=t1/2;
            }
        }
        cout<<t<<endl;
    }
}
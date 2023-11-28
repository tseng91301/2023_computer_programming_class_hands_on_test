#include<bits/stdc++.h>
using namespace std;
double e(int inp,int n=20){
    double o=1;
    for(int a=1;a<=n;a++){
        double t1=pow(inp,a);
        for(int b=a;b>=1;b--){
            t1/=b;
        }
        o+=t1;
    }
    return o;
}
int main(){
    cout<<e(2)<<endl;
}
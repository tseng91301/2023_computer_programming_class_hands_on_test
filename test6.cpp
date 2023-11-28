#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y){
    if(x%y==0){
        return y;
    }else{
        return(gcd(y,x%y));
    }
}
int main(){
    int x,y;
    while(cin>>x>>y){
        int gcd1=gcd(x,y);
        cout<<gcd1<<endl;
        int lcm1=x*y/gcd1;
        cout<<gcd1<<" "<<lcm1<<endl;
    }
}
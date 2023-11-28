#include<bits/stdc++.h>
using namespace std;
int main(){
    int pt=0;
    cin>>pt;
    const int rate=20;
    const int dtm=240;
    if(pt<30){
        pt=30;
    }else if(pt>30){
        pt=pt-(pt-(pt/30)*30);
    }
    int cost=pt*rate;
    if(rate>dtm){
        cost=dtm;
    } 
    cout<<cost<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int dice(int times=2){
    int out=0;
    for(int a=0;a<times;a++){
        out+=rand()%6+1;
    }
    return out;
}
int main(){
    srand(time(nullptr));
    int MAX_T=100000;
    double poss[12]={0};
    for(int a=0;a<MAX_T;a++){
        poss[dice()-1]++;
    }
    for(int a=0;a<12;a++){
        poss[a]/=MAX_T;
        cout<<a+1<<": "<<poss[a]<<endl;
    }
}
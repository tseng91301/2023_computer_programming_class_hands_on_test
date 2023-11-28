#include<bits/stdc++.h>
using namespace std;
int prime(int in){
    int is=1;
    for(int a=2;a<=sqrt(in);a++){
        if((in%a)==0){
            is=0;
            break;
        }
    }
    return is;
}
int main(){
    vector<int> primes;
    for(int a=2;a<=1000;a++){
        if(prime(a)){
            primes.push_back(a);
        }
    }
    for(int a=0;a<primes.size()-1;a++){
        if(primes[a+1]-primes[a]==2){
            cout<<primes[a]<<" "<<primes[a+1]<<endl;
        }   
    }
}
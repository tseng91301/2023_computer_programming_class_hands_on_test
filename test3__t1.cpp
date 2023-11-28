#include<bits/stdc++.h>
using namespace std;
int main(){
    string inp;
    while(cin.get()){
        while(cin>>inp){
            int l=inp.length();
            for(int a=l-1;a>=0;a--){
                cout<<inp[a];
            }
            cout<<endl;
        }
    }
    
}
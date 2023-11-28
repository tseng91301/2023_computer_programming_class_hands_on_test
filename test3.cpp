#include<bits/stdc++.h>
#include "conio.h"
using namespace std;
int main(){
    int a;
    string s1="";
    while(a=getch()){
        if(a==26){//ctrl+z
            cout<<"Exit"<<endl;
            break;
        }else if(a==13){//Enter
            cout<<endl;
            //Converting string
            int l=s1.length();
            for(int b=l-1;b>=0;b--){
                cout<<s1[b];
            }
            cout<<endl;
            //reset the input string
            s1="";
        }else{
            cout<<(char)a;
            s1+=(char)a; //add to input string
        }
    }
}
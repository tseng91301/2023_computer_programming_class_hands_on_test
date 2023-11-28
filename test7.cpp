#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    double root1;
    double root2;
    double delta=sqrt(pow(b,2)-4*a*c);
    cout<<delta<<endl;
    root1=(-b+delta)/(2*a);
    
    root2=(-b-delta)/(2*a);
    cout<<root1<<" "<<root2<<endl;
    if(abs(root1)-abs(root2)<0.00001){
        cout<<"coincident"<<endl;
    }
}
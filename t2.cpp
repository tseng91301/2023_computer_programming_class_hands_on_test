#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> help;
    help.push_back(1);
    help.push_back(2);
    help.push_back(3);
    int l=help.size();
    cout<<l<<endl;
    help[1]=6;
    for(int a=0;a<l;a++){
        cout<<help[a]<<" ";
    }
    cout<<endl;

    vector<int> help2={3,4,5,6,7};
    help2.pop_back();
    cout<<help2.size()<<endl;
    for(int a=0;a<help2.size();a++){
        cout<<help2[a]<<" ";
    }
    cout<<endl;

    vector<vector<int>> help2={
        {1,2,3,4,5},
        {4,4,5,6,7}
    }
    
}
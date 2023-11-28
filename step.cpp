#include<bits/stdc++.h>
using namespace std;

//The function that swap two int vectors
void swap(vector<int>& v1,vector<int>& v2){
    vector<int> t1=v2;
    v2=v1;
    v1=t1;
    return;
}

//The function that convert long long number to int vector
vector<int> stov(string input){
    vector<int> out;
    int il=input.length();
    for(int a=il-1;a>=0;a--){
        out.push_back(input[a]-48);
    }
    return out;
}

//The function that convert long long number to int vector
vector<int> lltov(long long input){
    vector<int> out;
    while(input>0){
        out.push_back(input%10);
        input=input/10;
    }
    return out;
}

//The function that convert int vector to string
string vtos(vector<int> input){
    string out="";
    int il=input.size();
    for(int a=il-1;a>=0;a--){
        out+=to_string(input[a]);
    }
    return out;
}

//The function that reverse the content of int vector
vector<int> vrev(vector<int> input){
    int il=input.size();
    int ild2=il/2;
    for(int a=0;a<ild2;a++){
        int t1=input[il-a-1];
        input[il-a-1]=input[a];
        input[a]=t1;
    }
    for(int a=il-1;a>=0;a--){
        if(input[a]==0){
            input.pop_back();
        }else{
            break;
        }
    }
    return input;
}

//carry if element in vector >= 10
vector<int> vcarry(vector<int> input){
    int l1=input.size();
    vector<int> out=input;
    for(int a=0;a<l1;a++){
        //if the number in a space of vector is bigger than 9, switch the tens digits into next space
        if(a==l1-1){
            if(out[a]>=10){
                out.push_back(out[a]/10);
                out[a]=out[a]%10;
            }
        }else{
            out[a+1]+=out[a]/10;
            out[a]=out[a]%10;
        }
    }
    return out;
}

//The function that add two int vectors together (use the method of vertical type addition)
vector<int> vadd(vector<int> n1,vector<int> n2){
    if(n1.size()<n2.size()){
        swap(n1,n2);// make sure that the length of n1 > the length of n2
    }
    int l1=n1.size();
    int l2=n2.size();
    vector<int> out;
    for(int a=0;a<l1;a++){
        // add each element in vectors and store in the same location
        if(a>=l2){
            out.push_back(n1[a]);
        }else{
            out.push_back(n1[a]+n2[a]);
        }
    }
    out=vcarry(out);
    
    return out;
}

vector<int> vtime_i(vector<int> iv,int ii,int offset=0){
    int vl=iv.size();
    vector<int> ov;
    for(int a=0;a<offset;a++){
        ov.push_back(0);
    }
    for(int a=0;a<vl;a++){
        ov.push_back(iv[a]);
    }
    for(int a=offset;a<vl+offset;a++){
        ov[a]=ov[a]*ii;
    }
    ov=vcarry(ov);
    return ov;
}

vector<int> vtime(vector<int> iv1,vector<int> iv2){
    int l1=iv1.size();
    int l2=iv2.size();
    vector<vector<int>> ti_r;
    for(int a=0;a<l1;a++){
        ti_r.push_back(vtime_i(iv2,iv1[a],a));
    }
    vector<int> out=ti_r[0];
    for(int a=1;a<l1;a++){
        out=vadd(out,ti_r[a]);
    }
    return out;
}

string steptime(long long numin){
    vector<int> o1={1};
    for(long long a=1;a<=numin;a++){
        cout<<"caculate to: "<<a<<endl;
        //cout<<a<<endl;
        o1=vtime(o1,lltov(a));
    }
    //cout<<vtos(o1)<<endl;
    return vtos(o1);
}
int main(){
    cout<<steptime(1000)<<endl;
}
#include<bits/stdc++.h>
using namespace std;
template<class T,size_t N>
void sort2(T (&in)[N]){
    for(int a=0;a<N;a++){
        for(int b=0;b<N;b++){
            if(in[a]<in[b]){
                T t1=in[a];
                in[a]=in[b];
                in[b]=t1;
            }
        }
    }
}
int main(){
    int arr[15]={3, 8, 10, 30, 2, 16, 27, 13, 22, 17, 42, 33, 38, 29, 14} ;
    sort2(arr);
    for(int a=0;a<15;a++){
        cout<<arr[a]<<" "; 
    }   
    cout<<endl;
}
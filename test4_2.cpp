#include<bits/stdc++.h>
using namespace std;
int main(){
    int M,N;
    cin>>M>>N;
    int **mat=new int*[M];
    for(int a=0;a<M;a++){
        mat[a]=new int[N];
        for(int b=0;b<N;b++){
            cin>>mat[a][b];
        }
    }
    
}
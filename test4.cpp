#include<bits/stdc++.h>
using namespace std;
int main(){
    int M,N;
    cin>>M>>N;
    int mat[M][N];
    for(int a=0;a<M;a++){
        for(int b=0;b<N;b++){
            cin>>mat[a][b];
        }
    }
    for(int a=0;a<M;a++){
        for(int b=0;b<N;b++){
            int rm=1;
            int cm=1;
            int tc=mat[a][b];
            for(int c=0;c<N;c++){
                if(mat[a][c]<tc){
                    rm=0;
                    break;
                }
            }
            for(int c=0;c<M;c++){
                if(mat[c][b]>tc){
                    cm=0;
                    break;
                }
            }
            if(rm&&cm){
                cout<<tc<<endl;
            }
        }
    }
}
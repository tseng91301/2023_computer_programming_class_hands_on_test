#include<bits/stdc++.h>
using namespace std;
void dadd(int **in,int m,int n,int& lr,int& rl){
    lr=rl=0;
    for(int a=0;a<m;a++){
        lr+=in[a][a];
        rl+=in[a][m-a-1];
    }
}
int main(){
    int M,N;
    cin>>M>>N;
    int **matrix=new int*[M];
    for(int a=0;a<M;a++){

        matrix[a]=new int[N];
    }
    for(int a=0;a<M;a++){
        for(int b=0;b<N;b++){
            cin>>matrix[a][b];
        }
    }
    int a1,a2;
    dadd(matrix,M,N,a1,a2);
    cout<<a1<<endl;
    cout<<a2<<endl;
    delete[] matrix;
}
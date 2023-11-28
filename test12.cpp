#include<bits/stdc++.h>
using namespace std;
int main(){
    int M,L;
    cin>>M>>L;
    int **A=new int*[M];
    for(int a=0;a<M;a++){
        A[a]=new int[L];
        for(int b=0;b<L;b++){
            cin>>A[a][b];
        }
    }
    int N;
    cin>>N;
    int **B=new int*[L];
    for(int a=0;a<L;a++){
        B[a]=new int[N];
        for(int b=0;b<N;b++){
            cin>>B[a][b];
        }
    }
    int **C=new int*[M];
    for(int a=0;a<M;a++){
        C[a]=new int[N];
    }
    for(int a=0;a<M;a++){
        for(int b=0;b<N;b++){
            int t1=0;
            for(int c=0;c<L;c++){
                t1+=A[a][c]*B[c][b];
            }
            C[a][b]=t1;
        }
    }
    for(int a=0;a<M;a++){
        for(int b=0;b<N;b++){
            cout<<C[a][b]<<" ";
        }
        cout<<endl;
    }
    for(int a=0;a<M;a++){
        delete[] A[a];
        delete[] C[a];
    }
    delete[] A;
    delete[] C;
    for(int a=0;a<L;a++){
        delete[] B[a];
    }
    delete[] B;
}
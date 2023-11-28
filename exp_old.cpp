#include<bits/stdc++.h>
using namespace std;

double e(int x,int n)
{
    double o = 0;
    if(x == 0)
    {
        return(1);
    }

    for(int a = 0; a <= n; a++)
    {
        double t1 = pow(x,a);
        cout << t1 << endl;
        int step = 1;

        for(int b=0;b<a;b++)
        {
            step *= (b + 1);
        }
        cout << step << endl;
        t1 /= step;
        //cout<<t1<<endl;
        o += t1;
    }
    return o;
}

int main()
{
    cout << e(2,20) << endl;
}


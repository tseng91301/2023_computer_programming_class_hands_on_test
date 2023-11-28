#include <bits/stdc++.h>
using namespace std;
int answer1;
int answer2;
int answer3;

int test(int ** array, int x, int y);

void area(int ** square)
{
    for (int a = 0; a < 20; a++)
    {
        for (int b = 0; b < 20; b++)
        {
            square[a][b] = 0;
        }
    }
    square[8][8] = square[8][10] = square[9][9] = square[10][9] = square[11][8] = square[11][10] = 1;
}

void result(int ** square)
{
    for (int a = 0; a < 20; a++)
    {
        for (int b = 0; b < 20; b++)
        {
            cout << square[a][b] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row = 20;
    int  **col = new int *[row];
    for (int a = 0; a < row; a++)
    {
        col[a] = new int [row];
    }

    int temrow = 20;
    int  **temcol = new int *[temrow];
    for (int a = 0; a < temrow; a++)
    {
        temcol[a] = new int[temrow];
    }
    area(temcol);
    //result(temcol);

    area(col);
    for (int a = 0; a < temrow; a++)
    {
        for (int b = 0; b < temrow; b++)
        {
            int t1=(int)test(col,a, b);
            //cout<<t1 << " ";
            temcol[a][b] = t1;
            cout << temcol[a][b] << " ";
        }
        cout<<endl;
    }
    cout<<temcol[3][3]<<endl;
    for (int a = 0; a < temrow; a++)
    {
        for (int b = 0; b < temrow; b++)
        {
            cout << temcol[a][b] << " ";
        }
        cout<<endl;
    }
    
    for (int a = 0; a < row; a++)
    {
        for (int b = 0; b < row; b++)
        {
            col[a][b] = temcol[a][b];
            cout << col[a][b] << " ";
        }
        cout << endl;
    }

    for(int a=0;a<row;a++){
        delete[] temcol[a];
        delete[] col[a];
    }
    delete[] temcol;
    delete[] col;
   
    
}

int test(int **array, int x, int y)
{
    int alive = 0;
    //left
    if (x > 0 && array[x - 1][y] ==1)
    {alive+=1;}
    //right
    if (x < 20 && array[x + 1][y] ==1)
    {alive+=1;}
    //top
    if (y > 0 && array[x][y-1] ==1)
    {alive+=1;}
    //bottom
    if (y < 20 && array[x][y+1] ==1)
    {alive+=1;}

    //top left
    if(y>0 && x>0 && array[x-1][y-1]==1)
    {alive+=1;}
    //top right
    if(y>0 && x<20 && array[x+1][y-1]==1)
    {alive+=1;}
    //bottom left
    if(y<20 && x>0 && array[x-1][y+1]==1)
    {alive+=1;}
    //bottom left
    if(y<20 && x<20 && array[x+1][y+1]==1)
    {alive+=1;}

    //alive and fewer than 2 die
    if(array[x][y]==1 && alive <2)
    {return 0;}
    //alive and 2 or 3 live
    if(array[x][y]==1 && (alive==2 || alive ==3))
    {return 1;}
    //more than 3 die
    if(alive >3)
    {return 0;}
    //daed but 3 live
    if(array[x][y]==0 && alive == 3)
    {return 1;}

    return 0;
}


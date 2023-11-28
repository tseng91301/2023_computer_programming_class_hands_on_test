#include <bits/stdc++.h>
#include "conio.h"
using namespace std;
int main()
{
    int a;
    string word = "";
    cout << "Please enter the sentence: ";
    while (a = getch())
    {
        if(a == 26)   // ctrl Z
        {
            cout << "Exit" << endl;
            break;
        }
        else if (a == 13)  //Enter
        {
            cout << endl;
            //Counverting string
            int L = word.length();
            for(int i = L-1; i >= 0; i--)
            {
                cout << word[i];
            }
            cout << endl;
            //reset the input string
            word = "";
            cout << "Please enter the sentence: ";
        }
        else
        {
            cout << (char)a;
            word += (char)a;  //add to input string
        }
        
        
    }
}
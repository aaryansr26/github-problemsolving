#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    int grade; 
    int a,b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> grade;
        if(grade > 37)
        {
            a = grade/5;  //grade = 43  a = 8
            b = grade%5; //b = 2

            if(b>2)
            {
                a++;
                grade = a*5;
            }
        }
        cout << grade << endl;
    }
    
}
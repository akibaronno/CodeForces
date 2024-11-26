#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
     cin >> n;
     int x = 0;
        string ch ;
     while(n--)
     {
        
        cin>>ch;
        if( ch[0]== '+' || ch[1]=='+')
        x++;
        if( ch[0] == '-' || ch[1]=='-') 
        x--;

     }
     cout << x << endl;

    return 0;
}
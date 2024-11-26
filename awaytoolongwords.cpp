#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        string ch;
    cin>> ch;
    int len = ch.length();
    char c = ch[0];
    char d = ch[len-1];
    if (len > 10)
    {
        cout << c<< len-2<< d <<endl;
    }
    else
    {    
       cout << ch << endl;
    }
    }
    return 0;
}

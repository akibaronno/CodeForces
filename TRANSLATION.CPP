#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s,a;
    cin >> s >> a;
    reverse (a.begin(),a.end());

    if(s==a)
    {
        cout << "YES" << endl;
    }
    else 
    cout << "NO" << endl;

}
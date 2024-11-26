#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long n;
    string s;
    cin>> n; cin>> s;
    long long anton = 0;
    long long danik = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i]=='A')
        {
            anton++;
        }
        if (s[i] == 'D')
        {
            danik++;
        }
    }
    if(anton == danik) cout <<"Friendship"<<endl;
    else if (anton > danik) cout << "Anton"<< endl;
    else cout << "Danik" <<endl;

}
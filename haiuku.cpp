#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
   optimize();
   
   string x,y,z;
   getline(cin, x);
   getline(cin, y);
   getline(cin, z);
   int xa = 0, ya = 0, za = 0;
   for(auto c : x)
   {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    xa++;
   }
   for(auto c : y)
   {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    ya++;
   }
   for(auto c : z)
   {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    za++;
   }
   if (xa == 5 && ya == 7 && za == 5)
   {
    cout <<"YES"<<endl;
   }
   else
   cout <<"NO" << endl;

}
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
   optimize();
   
   int n; cin >> n;
   vector<pair<string,string>>v(n);
   for(int i = 0; i < n; i++)
   {
    cin >> v[i].first >> v[i].second;
   }
   sort(v.begin(),v.end());
   int size = unique(v.begin(),v.end()) - v.begin();
   cout << size << endl;
}
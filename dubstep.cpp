#include<bits/stdc++.h>
#include <algorithm>
#include<math.h>
#include<limits.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//#define endl '\n';
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define floating(x) setprecision(x) //cout <<fixed << setprecision(x) << endl; 
#define ll long long
#define pb push_back
#define f first
//#define s second
// #define carr for(int i = 0; i < n; i++) cin >> arr[i];
// #define cvec for(int i = 0; i < n; i++) cin >> v[i];
#define cyn (x) cout << (x ? "YES" : "NO") << endl;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define mem(a,b) memset(a,b,sizeof(a))

int main()
{
    optimize()

  string s; cin >> s;
  string v;
   while(s.find("WUB")!=-1)  // while(s.find("WUB")!= string :: npos)
   {
    s.replace(s.find("WUB"),3," ");
   }
   cout<<s<<endl;

}
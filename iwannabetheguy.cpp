#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define floating(x) setprecision(x) //cout <<fixed << setprecision(x) << endl; 

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

  int n; cin >> n;
  int a; cin >> a; 
  
  int p[1000];
   for(int i = 0; i < a; i++)
  {
    cin >> p[i];
  } 
  int b; cin >> b;
   for(int i = a; i < a+b; i++)
  {
    cin >> p[i];
  }
sort(p,p+(a+b));
  int count = 0;
 for(int i = 0; i <a+b; i++)
 {
    if(p[i]!= p[i+1]) count ++;
 }
  if(count == n) {
   cout << "I become the guy." << endl;
  }
  else
  {
     cout <<"Oh, my keyboard!" << endl;
  }
  
}
#include<bits/stdc++.h>
#include <algorithm>
#include<math.h>
#include<limits.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define floating(x) setprecision(x) //cout <<fixed << setprecision(x) << endl; 
#define ll long long
#define pb push_back
#define f first
//#define s second
#define carr for(int i = 1; i <= n; i++) cin >> a[i];
 #define cvec for(int i = 0; i < n; i++) cin >> v[i];
#define cyn (x) cout << (x ? "YES" : "NO") << endl;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define mem(a,b) memset(a,b,sizeof(a))

const int mx = 10e5+123;
int a[mx];
ll sum[mx];

int main()
{
    optimize()
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string a="",b="";

        for(int i = 1 ; i <= n; i++)
        {
            if(i%2==0)
            {
                a += "##";
                b += "..";
            }
            else
            {
                a += "..";
                b += "##";
            }
        }
            a += "\n" + a;
            b += "\n" + b;
        for(int i = 1 ; i <= n; i++)
        {
            if(i%2==0) cout << a <<"\n";
            else cout << b<<"\n";
        }

        
        
    }
    
}
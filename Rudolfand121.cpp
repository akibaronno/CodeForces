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

bool canmakezero(vector<int> & a)
{
    int n = a.size();
    if(n <= 2) return false;

    int sum = 0;
    for(int i = 0; i <n; ++i)
    {
        sum += a[i];
    }
    if(sum%2 != 0) return false;

    int max = *max_element(all(a));
    if (max * 2 > sum) return false;

    else return true;
}


int main()
{
    optimize ()
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int>a(n);

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if(!canmakezero(a))
        {
            no;
        }
        else yes;
    }
}
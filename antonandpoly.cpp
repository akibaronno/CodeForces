#include <bits/stdc++.h>
// #include<iostream>
#include <math.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
//#define endl '\n';
#define all(x) x.begin(), x.end()
// #define ll long long
#define vi vector<int>
#define vii vector<long long>
#define pb push_back
#define f first
//#define s second
#define carr                    \
    for (int i = 0; i < n; i++) \
    cin >> arr[i]
#define cvec                    \
    for (int i = 0; i < n; i++) \
    cin >> v[i]
#define cyn (x) cout << (x ? "YES" : "NO") << endl
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    optimize();
    int t;
    map<string,int> mp;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;
    
    cin >> t; string s; long long sum = 0;
    while(t--)
    {
        cin >> s;
        sum += mp[s];
    }
    cout << sum << endl;
    
  
}

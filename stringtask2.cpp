#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
    optimize ();
    string s,ans; cin >> s;
    transform(s.begin(),s.end(),s.begin(), :: tolower);
    for(int i = 0; i < s.size(); i++)
    {
          if(s[i] =='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
          {
            continue;
          }
          else{
            ans += '.';
            ans += s[i];
            
          }
    }
    cout << ans << endl;

}
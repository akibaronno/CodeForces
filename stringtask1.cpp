#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
bool isvowel(char c)
{
    return (c =='a' || c == 'e' || c == 'i' || c == 'o' || c== 'u' || c == 'y');
}
int main()
{
    optimize ();
    string s,ans; cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        char c = tolower(s[i]);
        if(isvowel(c)==0)
        {
            ans += '.';
            ans += c;
        }
        
    }
    cout << ans << endl;   

}
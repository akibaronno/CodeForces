#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int s = 0, d = 0, turn = 0;
    while (!v.empty())
    {
        if (turn == 0)
        {
            if (v.front() > v.back())
            {
                s += v.front();
                v.erase(v.begin());
                
            }
            else

            {
                s += v.back();
                v.pop_back();
             
            }
            turn = 1;
        }
        else if (turn == 1)
        {
            if (v.front() > v.back())
            {
                d += v.front();
                v.erase(v.begin());
              
            }
            else

            {
                d += v.back();
                v.pop_back();
               
            }
            turn = 0;
        }
    }
    cout << s <<' '<< d << endl;
}
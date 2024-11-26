#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string ch;
	cin >> ch;
        int moves = 0;
        for(int i = 0; i < n ; i++)
        {
               if(ch[i]==ch[i+1])
                {
                    moves ++ ;
                }
        }
    
      cout << moves << endl;

}
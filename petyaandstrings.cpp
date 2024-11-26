#include<bits/stdc++.h>
#include<string>
using namespace std;

int main ()
{
    string aku,fku;
    cin >> aku >> fku;
    transform( aku.begin(),aku.end(), aku.begin(), ::toupper);
    transform( fku.begin(),fku.end(), fku.begin(), ::toupper);
    
        if(aku == fku)  
        cout << 0 << endl;
        else if (aku > fku) 
           cout << 1 << endl;
        else 
           cout << -1 << endl;

    return 0;
} 
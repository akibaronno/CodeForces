#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string str;
    cin >> str;
    sort(str.begin(),str.end());
    int sum = 0;
    for(int i  = 0; i< str.size(); i++)
    {
        if(str[i]!=str[i+1])
        sum++;
    }
    if(sum % 2 == 0)
    cout << "CHAT WITH HER!"<<endl;
    else 
    cout <<"IGNORE HIM!" << endl;
}
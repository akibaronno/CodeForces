#include<iostream>
using namespace std;
int main ()
{
    long long k, n, w;
    cin >> k >> n >> w;
    long long cost = 0;
    for(int i =1; i <=w; i ++)
    {
          cost += i * k;
    }
    long long need_money = cost - n;
    if (cost > n)
    {
       cout << need_money<< endl;
    }   
    else
    cout <<0<< endl;
}
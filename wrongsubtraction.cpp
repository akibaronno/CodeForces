#include<iostream>
using namespace std;
int main ()
{
   long long n,rem;
   int k;
   cin >> n >> k;
   for(int i = 1; i <= k; i ++)
   {
    if(n%10!=0)
    {
        rem = n - 1;
    }
    else if(n%10==0)
    {
        rem = n / 10;
    } 
    n = rem;
   }
    cout << rem << endl;
   
}
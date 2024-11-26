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
int main()
{
    optimize()
   
  int t; cin >> t;
    while(t--)
    {
        int buns, beef_pattice, chick_cutlets,  price_hamburger, price_chicken_burger;
        cin >>  buns >> beef_pattice >> chick_cutlets >> price_hamburger>> price_chicken_burger;
        int bunforchick, bunforbeefpattice;
        int chickenburger= 0, beefburger= 0;
        if(buns <= 1 )
        {
            beefburger = 0;
            chickenburger = 0;
        }

        // else if(buns < beef_pattice && buns < chick_cutlets)
        // {
        //     beefburger = 0;
        //     chickenburger = 0;
        // }
        
        else
        {
            if(price_chicken_burger >= price_hamburger) //89 > 61
        {
            bunforchick = chick_cutlets * 2;  // 170
            if(bunforchick > buns) //170 > 58
            {
                if(buns%2==0) {bunforchick = buns; }//58
                else bunforchick = buns - 1;
            } 
            chickenburger = bunforchick / 2; //27
            //cout << chickenburger << endl;
            int buns2 = buns - bunforchick;  //0
           bunforbeefpattice = beef_pattice * 2; //10 
           if(buns2 < bunforbeefpattice) 
           {
               bunforbeefpattice = buns2 /2; //1
               beefburger = bunforbeefpattice ; 
           }
           else
           {
                beefburger = bunforbeefpattice / 2;
           }
        }
        
         else
        {
              bunforbeefpattice = beef_pattice * 2; 
              if(bunforbeefpattice > buns) 
            {
                if(buns%2==0) bunforbeefpattice = buns;
                else bunforbeefpattice = buns - 1;
            } 
             beefburger = bunforbeefpattice / 2;
             int buns2 = buns - bunforbeefpattice;  //3  
            bunforchick = chick_cutlets * 2; // 10
           if(buns2 < bunforchick)
            {
               bunforchick = buns2 /2;
                chickenburger = bunforchick ;
            }
           else
           {
                 chickenburger = bunforchick / 2;
            }

         }
        }

        int pforchick = chickenburger * price_chicken_burger;
        int pforbeef = beefburger * price_hamburger;
        int total = pforchick + pforbeef ;
        cout << total << endl;

        //cout << beefburger << " " << chickenburger << endl;
}
}
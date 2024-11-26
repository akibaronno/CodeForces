#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    int mat[6][6], moves_row, moves_collum;
    int total_moves = 0;
    for(int i = 1; i<6; i++)
    {
        for(int j = 1; j < 6; j++)
        {
            cin >> mat[i][j];
            if(mat[i][j]==1)
            {
                moves_row = abs(3-i);
                moves_collum = abs(3-j);
                total_moves = moves_collum + moves_row;
            }
        }
    }
    cout << total_moves << endl;

    return 0;
}
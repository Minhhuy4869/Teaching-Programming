#include <bits/stdc++.h>
#define MAX 8
using namespace std;

int A[MAX][MAX] = {0};
int X[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int Y[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
int n, flag, dem;

void quaylui(int x, int y, int flag)
{
    A[x][y] = flag;
    if(flag == n*n)
    {
        dem++;
    }
    for(int i=0; i<8; ++i)
    {
        int u = x + X[i];
        int v = y + Y[i];
        if(u >= 0 && u < n && v>= 0 && v < n && A[u][v] == 0)
        {
            quaylui(u, v, flag + 1);
        }
    }
    // backtrack
    A[x][y] = 0;
}

int main()
{
    cin>>n;
    for(int i=0; i<n; ++i) 
    {
        for(int j=0; j<n; ++j) 
        {
            quaylui(i, j, 1);
        }
    }
    cout<<dem;
    return 0;
}

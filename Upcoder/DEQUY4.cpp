#include <bits/stdc++.h>
using namespace std;

int lt(int x, int n)
{
    if(n == 0)
        return 1;
    return lt(x, n-1) * x;
}

int tong(int x, int n)
{
    if(n == 0)
        return 1;
    return tong(x, n-1) + lt(x, n);
}

int main()
{
    int n, x;
    cin>>n>>x;
    cout<<tong(x,n);
    return 0;
}

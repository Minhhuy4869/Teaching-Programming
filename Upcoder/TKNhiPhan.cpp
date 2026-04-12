#include <bits/stdc++.h>
using namespace std;

int bs(int a[], int n, int x)
{
    int left = 0, right = n-1, mid;
    while(left <= right)
    {
        mid = left + (right-left)/2;
        if(x == a[mid])
            return mid;
        else if(x < a[mid])
            right = mid - 1;
        else if(x > a[mid])
            left = mid + 1;
    }
    return -1;
}

int main()
{
    int n, x;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    cout<<bs(a,n,x);
    return 0;
}

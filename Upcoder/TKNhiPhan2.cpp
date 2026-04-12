#include <bits/stdc++.h>
using namespace std;

int fbs(int a[], int n, int x)
{
    int left = 0, right = n-1, mid, res = -1;
    while(left <= right)
    {
        mid = left + (right-left)/2;
        if(x == a[mid])
        {
            res = mid;
            right = mid - 1;
        }
        else if(x < a[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return res;
}

int lbs(int a[], int n, int x)
{
    int left = 0, right = n-1, mid, res = -1;
    while(left <= right)
    {
        mid = left + (right-left)/2;
        if(x == a[mid])
        {
            res = mid;
            left = mid + 1;
        }
        else if(x < a[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return res;
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
    int first = fbs(a,n,x), last = lbs(a,n,x);
    for(int i=first; i<=last; ++i)
    {
        cout<<i<<" ";
    }
    return 0;
}

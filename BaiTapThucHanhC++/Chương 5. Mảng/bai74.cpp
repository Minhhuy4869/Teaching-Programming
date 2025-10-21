/*
74) Viết hàm tìm phần tử nhỏ nhất trong mảng các số nguyên.
*/

#include <iostream>
#include <cmath>
using namespace std;

int find (int n, int a[])
{
    int Min = a[0];  
    for (int i=1; i<n; ++i)
    {
        if (Min>a[i])
        {
            Min = a[i];
        }
    }
    return Min;
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    cout<<find(n,a);
    return 0;
}
/*
84) Viết hàm tìm số lẻ lớn nhất có trong mảng, 
nếu không tồn taị số lẻ hàm trả về -1.
*/

#include <iostream>
#include <cmath>
using namespace std;

int find (int n, int a[])
{
    int Max = -1;
    for (int i=0; i<n; ++i)
    {
        if (a[i]%2!=0 && Max<a[i])
        {
            Max = a[i];
        }
    }
    return Max;
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
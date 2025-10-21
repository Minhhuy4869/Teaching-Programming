/*
80) Viết hàm tìm vi trí phần tử dương đầu tiên trong mảng. 
Nếu không có phần tử dương trả về –1.
*/

#include <iostream>
#include <cmath>
using namespace std;

int find (int n, int a[])
{
    for (int i=0; i<n; ++i)
    {
        if (a[i]>=0)
        {
            return i;
        }
    }
    return -1;
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
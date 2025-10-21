/*
72) Viết chương trình nhập mảng một chiều các số nguyên và xuất các phần tử là số
chính phương nằm tại những vị trí lẻ trong mảng.
*/

#include <iostream>
#include <cmath>
using namespace std;

bool scp (int n)
{
    if (sqrt(n)*sqrt(n)==n) 
    {
        return true;
    }
    return false;
}

bool snt (int n)
{
    if (n<2)
    {
        return false;
    }
    for (int i=2; i<=sqrt(n); ++i)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
        if (scp(a[i]) && i%2!=0) // a[i] co la so nguyen to hay ko?
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
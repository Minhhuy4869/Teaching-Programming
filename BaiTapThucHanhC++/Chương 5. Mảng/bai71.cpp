/*
71) Viết chương trình nhập mảng một chiều các số nguyên và xuất các phần tử là
số nguyên tố.
*/

#include <iostream>
#include <cmath>
using namespace std;

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
        if (snt(a[i])) // a[i] co la so nguyen to hay ko?
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
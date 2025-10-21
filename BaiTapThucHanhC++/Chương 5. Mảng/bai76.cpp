/*
76) Viết hàm in vi trí các phần tử nguyên tố trong mảng các số nguyên.
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
        if (snt(a[i]))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
// 91. Viết hàm đếm các phần tử là số nguyên tố trong mảng.

#include <iostream>
#include <cmath>
using namespace std;

bool snt (int n)
{
    if (n<2)
        return false;
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
    int n, dem = 0; 
    cin>>n;
    int a[n]; // mang tinh
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
        if (snt(a[i]))
        {
            dem++;
        }
    }
    cout<<"So luong so nguyen to trong mang la: "<<dem;
    return 0;
}

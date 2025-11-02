// 96. Viết hàm tính tổng các phần tử là nguyên tố trong mảng.

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
            return false;
    }
    return true;
}

int main()
{
    int n, tong = 0; 
    cin>>n;
    int a[n]; // mang tinh
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
        if (snt(a[i]))
        {
            tong += a[i];
        }
    }
    cout<<"Tong cac so nguyen to trong mang la: "<<tong;
    return 0;
}

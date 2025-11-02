

/* 101) Viết hàm tính tổng các phần tử là bội của 3 or 5 trong mảng các số nguyên. */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, tong = 0; 
    cin>>n;
    int a[n]; // mang tinh
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
        if (a[i]%3==0 || a[i]%5==0)
            tong += a[i];
    }
    cout<<"Tong cac phan tu chia het cho 3 hoac 5 trong mang la: "<<tong;
    return 0;
}

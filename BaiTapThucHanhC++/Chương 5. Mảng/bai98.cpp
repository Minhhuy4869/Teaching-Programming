// 98) Viết hàm tính tổng các phần tử chia hết cho 5 có trong mảng.

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
        if (a[i]%5==0)
        {
            tong += a[i];
        }
    }
    cout<<"Tong cac so chia het cho 5 trong mang la: "<<tong;
    return 0;
}

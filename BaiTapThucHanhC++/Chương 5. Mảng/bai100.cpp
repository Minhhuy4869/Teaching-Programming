

/* 100) Viết hàm tính tổng các phần tử cực tiểu trong mảng các số nguyên 
(phần tử cực tiểu là phần tử nhỏ hơn các phần tử xung quanh nó).
*/
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
    }
    for (int i=0; i<n; ++i)
    {
        if (i==0)
        {
            if (a[i]<a[i+1])
                tong += a[i];
        }
        else if (i==n-1)
        {
            if (a[i]<a[i-1])
                tong += a[i];
        }
        else
        {
            if (a[i]<a[i-1] && a[i]<a[i+1])
                tong += a[i];
        }
    }
    cout<<"Tong cac phan tu cuc tieu trong mang la: "<<tong;
    return 0;
}

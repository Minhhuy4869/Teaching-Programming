// 92. Viết hàm đếm các phần tử là số hoàn thiên trong mảng.

#include <iostream>
#include <cmath>
using namespace std;

// so hoan thien (so hoan hao) la so ma tong cac uoc cua no
// khong tinh chinh no = chinh no

bool sht (int n)
{
    int tong = 0;
    for (int i=1; i<=n/2; ++i)
    {
        if (n%i==0)
        {
            tong += i;
        }
    }
    if (tong==n)
    {
        return true;
    }
    return false;
}

int main()
{
    int n, dem = 0; 
    cin>>n;
    int a[n]; // mang tinh
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
        if (sht(a[i]))
        {
            dem++;
        }
    }
    cout<<"So luong so hoan thien trong mang la: "<<dem;
    return 0;
}

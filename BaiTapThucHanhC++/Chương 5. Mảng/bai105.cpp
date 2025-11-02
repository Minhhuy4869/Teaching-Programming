

/* 105) Viết hàm tính giá trị trung bình các phần tử có giá trị là ước số của x trong mảng số nguyên (x nhập từ bàn phím).*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, x, dem = 0, tong = 0; 
    cin>>n>>x;
    int a[n]; // mang tinh
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
        if (x%a[i]==0)
        {
            tong += a[i];
            dem++;
        }
    }
    cout<<"Giá trị trung bình các phần tử có giá trị là ước số của "<<x
    <<" trong mảng số nguyên: "<<tong<<'/'<<dem;
    return 0;
}

// 90. Viết hàm đếm các phần tử nhỏ hơn x trong mảng.

#include <iostream>
using namespace std;

int main()
{
    int n, x, dem = 0; 
    cin>>n>>x;
    int a[n]; // mang tinh
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
        if (a[i]<x)
        {
            dem++;
        }
    }
    cout<<"So luong phan tu nho hon "<<x<<" la: "<<dem;
    return 0;
}

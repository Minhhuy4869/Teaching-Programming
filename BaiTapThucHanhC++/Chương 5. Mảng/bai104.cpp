

/* 104) Viết hàm tính giá trị trung bình 
các phần tử có giá trị lẻ trong mảng số nguyên.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, dem = 0, tong = 0; 
    cin>>n;
    int a[n]; // mang tinh
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
        if (a[i]%2!=0)
        {
            tong += a[i];
            dem++;
        }
    }
    cout<<"Gia tri trung binh cua cac so le trong mang la: "<<(float)tong/dem;
    return 0;
}

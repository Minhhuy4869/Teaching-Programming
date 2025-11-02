

/* 103) Viết hàm tính giá tri 
trung bình các số hoàn thiện trong mảng các số nguyên.*/

#include <iostream>
#include <cmath>
using namespace std;

bool sht (int n)
{
    int tong = 0;
    for (int i=1; i<=n/2; ++i)
    {
        if (n%i==0)
            tong += i;
    }
    if (tong==n)
        return true;
    return false;
}

int main()
{
    int n, dem = 0, tong = 0; 
    cin>>n;
    int a[n]; // mang tinh
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
        if (sht(a[i]))
        {
            tong += a[i];
            dem++;
        }
    }
    cout<<"Gia tri trung binh cua cac so hoan thien trong mang la: "<<(float)tong/dem;
    return 0;
}

// 95. Viết hàm tính tổng các phần tử lẻ trong mảng các số nguyên.

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
        if (a[i]%2!=0)
        {
            tong += a[i];
        }
    }
    cout<<"Tong so le trong mang la: "<<tong;
    return 0;
}

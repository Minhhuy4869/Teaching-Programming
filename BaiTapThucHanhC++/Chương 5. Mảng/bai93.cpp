// 93. Viết hàm đếm các phần tử là bội của 3 or 5 trong mảng các số nguyên.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, dem = 0; 
    cin>>n;
    int a[n]; // mang tinh
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
        if (a[i]%3==0 || a[i]%5==0)
        {
            dem++;
        }
    }
    cout<<"So luong so chia het cho 3 hoac chia het cho 5 trong mang la: "<<dem;
    return 0;
}

// 97 Viết hàm tính tổng các phần tử nằm ở vi trí chẵn trong mảng các số nguyên.

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
        if (i%2==0)
        {
            tong += a[i];
        }
    }
    cout<<"Tong cac so nam o vi tri chan trong mang la: "<<tong;
    return 0;
}

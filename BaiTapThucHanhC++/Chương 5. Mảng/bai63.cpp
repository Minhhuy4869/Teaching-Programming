// Viết chương trình nhập xuất mảng một chiều các số nguyên.
#include <iostream>
using namespace std;

int main()
{
    cout<<"Nhap vao mang mot chieu cac so nguyen: ";
    int n;
    cin>>n;
    int a[n]; 
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    cout<<"Mang mot chieu cac so nguyen la: "<<endl;
    for (int i=0; i<n; ++i)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
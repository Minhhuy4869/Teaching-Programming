//Viết chương trình khởi tạo giá trị các phần tử trong mảng là 0 cho mảng một chiều các số nguyên gồm n phần tử.
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
    cout<<"Khoi tao gia tri cac phan tu trong mang la 0: "<<endl;
    for (int i=0; i<n; ++i)
    {
        a[i] = 0;
    }
    cout<<"Mang mot chieu cac so nguyen la: "<<endl;
    for (int i=0; i<n; ++i)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
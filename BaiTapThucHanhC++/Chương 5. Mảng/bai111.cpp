// Cau 2 bai 9 file word - Viết hàm xoá phần tử có giá tri lớn nhất trong mảng.

#include <iostream>
using namespace std;

void res (int n, int a[])
{
    // Tim phan tu lon nhat
    int Max = a[0];
    for (int i=1; i<n; ++i)
    {
        if (Max<a[i])
        {
            Max = a[i];
        }
    }
    // Xoa phan tu lon nhat
    int size = 0;
    for (int i=0; i<n; ++i)
    {
        if (a[i]<Max)
        {
            a[size] = a[i];
            size++;
        }
    }
    // In ra mang sau khi da xoa
    for (int i=0; i<size; ++i)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    res(n,a);
    return 0;
}

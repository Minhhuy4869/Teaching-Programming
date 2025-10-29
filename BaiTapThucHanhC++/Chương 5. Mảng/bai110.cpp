// Cau 2 bai 8 file word - Viết hàm xoá phần tử taị vi trí lẻ trong mảng.

#include <iostream>
using namespace std;

void res (int n, int a[])
{
    int size = 0;
    for (int i=0; i<n; ++i)
    {
        if (i%2==0)
        {
            a[size] = a[i];
            size++;
        }
    }
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

/* 
68) Viết chương trình nhập mảng một chiều các số nguyên và xuất các phần tử âm trong mảng.
*/

/*
68) Viết chương trình nhập mảng một chiều các số nguyên và xuất các phần tử âm
trong mảng.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
        if (a[i]<=0) // a[i] co la so am hay ko?
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
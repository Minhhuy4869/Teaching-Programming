/*
Viết chương trình đếm số ước số của số nguyên dương n.
Ví dụ: n = 12 => số ước số của 12 là 6
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int dem = 2; // bien dem cac uoc so cua n, luon co 2 uoc la 1 va chinh no
    for (int i=2; i<n; ++i)
    {
        if (n%i==0)
        {
            dem++;
        }
    }
    cout<<dem;
    return 0;
}
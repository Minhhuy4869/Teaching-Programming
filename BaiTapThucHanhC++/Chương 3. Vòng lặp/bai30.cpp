// Tính S = 1 + 3 + 5 + ... + (2n + 1) với n ≥ 0

#include <iostream>
using namespace std;

int main()
{
    int n, tong = 0;
    cout<<"Nhap n: ";
    cin>>n;
    for (int i=1; i<=2*n+1; i += 2)
    {
        tong = tong + i;
    }
    cout<<"Tong S = "<<tong;
    /* 
    Cách 2. Dùng while
    int i=1;
    while (i<=2*n+1)
    {
        tong = tong + i;
        i += 2;
    }
    */
    return 0;
}

// Tính S = 1 + 2 + 3 + ... + n với n ≥ 0

#include <iostream>
using namespace std;

int main()
{
    int n, tong = 0;
    cin>>n;
    for (int i=1; i<=n; ++i)
    {
        tong =  tong + i;
    }
    cout<<tong;
    /* 
    Cách 2. dùng while
    int i=1;
    while (i<=n)
    {
        tong = tong + i;
        i++;
    }
    */
    return 0;
}
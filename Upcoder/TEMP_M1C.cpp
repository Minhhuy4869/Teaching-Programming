#include <bits/stdc++.h>
using namespace std;
const int huy = 420;    

template <class T>
struct M1C
{
    int n;
    T a[huy];
    void nhap()
    {
        n = 0;
        while(cin>>a[n])
            n++;
    }
    void xuat()
    {
        for(int i=0; i<n; ++i)
        {
            cout<<a[i];
        }
    }
    void tong()
    {
        int s = 0;
        for(int i=0; i<n; ++i)
            s+=a[i];
        cout<<s;
    }
};

int main()
{
    M1C <int> t;
    t.nhap();
    t.tong();
    return 0;
}

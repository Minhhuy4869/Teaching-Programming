#include <bits/stdc++.h>
using namespace std;

struct ps
{
    int tu, mau;
    ps rg()      
    {
        int uoc = __gcd(tu, mau);     // Hàm có sẵn của C++ để tìm Ước chung lớn nhất!
        tu /= uoc;
        mau /= uoc;
        // Luôn đẩy dấu trừ lên tử nếu mẫu âm (Ví dụ: 1/-2 sẽ thành -1/2) để lát nữa so sánh 2 ps hong bị sai nhe
        if(mau < 0)
        {
            tu = -tu;
            mau = -mau;
        }
        return *this;                
    }
};

istream& operator >> (istream &in, ps &p)
{
    in>>p.tu>>p.mau;
    return in;
}

ostream& operator << (ostream &out, ps p)
{
    out<<p.tu<<'/'<<p.mau;
    return out;
}

int main()
{
    int n;
    cin>>n;
    ps a[n];
    for(int i=0; i<n; ++i)
    {
        cin>>a[i]; 
    }
    ps res = a[0];
    for(int i=1; i<n; ++i)
    {
        if(res.tu*a[i].mau > res.mau*a[i].tu)
        {
            res.tu = a[i].tu;
            res.mau = a[i].mau;
        }
    }
    cout<<res.rg(); 
    return 0;
}

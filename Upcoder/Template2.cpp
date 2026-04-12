#include <bits/stdc++.h>
using namespace std;

// cấu trúc phân số
struct ps
{
    int tu, mau;
    ps rg()
    {
        int uoc = __gcd(tu,mau);
        tu /= uoc;
        mau /= uoc;
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
    p.rg();                    // rút gọn ngay sau khi nhập phân số
    return in;
}

ostream& operator << (ostream &out, ps p)
{
    out<<p.tu<<'/'<<p.mau;
    return out;
}

ps operator + (ps p, ps q)
{
    ps res;
    res.tu = p.tu*q.mau + p.mau*q.tu;
    res.mau = p.mau*q.mau;
    return res;
}

// cấu trúc mảng (array) có dùng template
template <class T>
struct arr
{
    T a[100];
    int n;
    void nhap()
    {
        n=0;
        while (cin>>a[n])
        {
            n++;
        }
    }
};

int main()
{
    char k;
    cin>>k;
    if(k == 'a')
    {
        arr <int>p;
        p.nhap();
        int s = 0;
        for(int i=0; i<p.n; ++i)
        {
            s = s + p.a[i];
        }
        cout<<s;
    }
    else if(k == 'b')      // trường hợp phân số
    {
        arr <ps>q;
        q.nhap();
        for(int i=0; i<q.n; ++i)
        {
            cin>>q.a[i];
        }
        ps s = {0,1};      // tạo một phân số mặc định = 0/1
        for(int i=0; i<q.n; ++i)
        {
            s = s + q.a[i];
        }
        s.rg();
        cout<<s;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// cấu trúc phân số
struct ps
{
    int tu, mau;
    ps rg()
    {
        int uoc = __gcd(tu, mau);
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
    return res.rg();
}

// cấu trúc mảng (array) có dùng template
template <class T>
struct arr
{
    T a[100];
    int n = 0;
    void nhap()
    {
        cin>>a[n];
        n++;
    }
    T tong()
    {
        T s = a[0];
        for(int i=1; i<n; ++i)
        {
            s = s + a[i];
        }
        return s;
    }
};

int main()
{
    char k;
    arr<int> p;  // 1 mảng số nguyên
    arr<ps> q;   // 1 mảng phân số
    while(cin>>k)
    {
        if(k == 'a')
        {
            p.nhap();
        }
        else if(k == 'b')
        {
            q.nhap();
        }
    }
    if(p.n != 0)
    {
        cout<<p.tong()<<"\n";
    }
    else
    {
        cout<<"khong co"<<"\n";
    }
    if(q.n != 0)
    {
        cout<<q.tong();
    }
    else
    {
        cout<<"khong co";
    }
    return 0;
}

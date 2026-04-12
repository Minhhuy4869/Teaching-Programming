#include <bits/stdc++.h>
using namespace std;

template <typename T>
T GTLN (T a, T b, T c)
{
    return max(a, max(b, c));    // tìm số lớn nhất trong 2 số b với c rồi tìm số lớn nhất giữa kết quả vừa có với số a
}

struct ps
{
    int tu, mau;
    ps rg()
    {
        int uoc= __gcd(tu, mau);
        tu /= uoc;
        mau /= uoc;
        return *this;
    }
};

istream& operator >> (istream& in, ps &p)
{
    in>>p.tu>>p.mau;
    return in;
}

ostream& operator << (ostream& out, ps p)
{
    out<<p.tu<<'/'<<p.mau;
    return out;
}

bool operator < (ps p, ps q)
{
    ps a = p.rg();
    ps b = q.rg();
    return a.tu*b.mau < b.tu*a.mau;
}

int main()
{
    char x;
    cin>>x;
    if(x == 'a')
    {
        int a, b, c;
        cin>>a>>b>>c;
        cout<<GTLN(a,b,c);
    }
    if(x == 'b')
    {
        float a, b, c;
        cin>>a>>b>>c;
        cout<<GTLN(a,b,c);
    }
    if(x == 'c')
    {
        ps a, b, c;
        cin>>a>>b>>c;
        ps d = GTLN(a,b,c);
        cout<<d;
    }
    return 0;
}

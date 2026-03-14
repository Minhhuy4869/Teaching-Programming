#include <bits/stdc++.h>
using namespace std;

struct ps
{
    int tu, mau;
    ps rg()
    {
        int uoc = __gcd(tu, mau);
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
    out<<p.tu<<"/"<<p.mau;
    return out;
}

ps operator + (ps a, ps b)
{
    ps res;
    res.tu = a.tu*b.mau + a.mau*b.tu;
    res.mau = a.mau*b.mau;
    return res;
}

int main()
{
    ps p, s = {0, 1};        // ps mặc định là 0/1 nhe
    while(cin>>p)
    {
        s = s + p;
    }
    s.rg();
    cout<<s;
    return 0;
}

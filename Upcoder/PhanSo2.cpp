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
    res.tu = a.tu*b.mau + b.tu*a.mau;
    res.mau = a.mau*b.mau;
    return res;
}

ps operator += (ps&a, ps& b)
{
    a=a+b;
    return a;
}

bool operator == (ps a, ps b) 
{
    // Rút gọn cả 2 phân số trước khi so sánh
    a.rg();
    b.rg();
    return (a.tu==b.tu && a.mau==b.mau);
}

bool operator != (ps a, ps b)
{
    return !(a==b);
}

int main()
{
    ps p, s;
    bool huy = true;      // biến cờ đóng vai trò check
    while(cin>>p.tu>>p.mau)
    {
        if(huy == true)
        {
            s = p;
            huy = false;
        }
        else
            s += p;
    }
    s = s.rg();
    cout<<s;
    return 0;
}

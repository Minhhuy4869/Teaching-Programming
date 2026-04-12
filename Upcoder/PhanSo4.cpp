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
        if (mau < 0)
        {
            tu = -tu;
            mau = -mau;
        }
        return *this;
    }
};

istream& operator >> (istream& in, ps &p)
{
    in>>p.tu>>p.mau;
    p.rg();
    return in;
}

ostream& operator << (ostream& out, ps p)
{
    out<<p.tu<<"/"<<p.mau;
    return out;
}

bool operator < (ps a, ps b)
{
    return a.tu*b.mau < b.tu*a.mau;
}

int main()
{
    ps p, s;
    bool check = true;
    while(cin>>p)
    {
        if(check == true)
        {
            s = p;
            check = false;
        }
        else
        {
            if(p < s)
                s = p;
        }
    }
    cout<<s;
    return 0;
}

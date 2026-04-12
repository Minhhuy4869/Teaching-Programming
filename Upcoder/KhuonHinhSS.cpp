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
    p.rg();
    return in;
}

ostream& operator << (ostream& out, ps p)
{
    out<<p.tu<<'/'<<p.mau;
    return out;
}

bool operator == (ps a, ps b)
{
    ps p = a.rg();
    ps q = b.rg();
    if(p.tu==q.tu && p.mau==q.mau)
        return true;
    return false;
}

template <class T>
void ss (T a, T b)
{
    if (a==b)
        cout<<"true";
    else
        cout<<"false";
}

int main()
{
    char x; 
    cin>>x;
    if(x == 'a')
    {
        int a, b;
        cin>>a>>b;
        ss(a,b);
    }
    else if(x == 'b')
    {
        float a, b;
        cin>>a>>b;
        ss(a,b);
    }
    else if(x == 'c')
    {
        ps a, b;
        cin>>a>>b;
        ss(a,b);
    }
    return 0;
}

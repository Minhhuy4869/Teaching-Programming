#include <bits/stdc++.h>
using namespace std;

struct ps
{
    int tu, mau; 
    // Hàm rút gọn phân số 
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
    
    ps operator + (ps t) 
    {
        ps res;
        res.tu = tu*t.mau + t.tu*mau;
        res.mau = mau*t.mau;
        return res.rg(); 
    }
    
    bool operator == (ps t)
    {
        return tu==t.tu && mau==t.mau;
    }
    
    bool operator != (ps t)
    {
        return !(tu==t.tu && mau==t.mau);
    }
};

istream& operator >> (istream &in, ps &t)
{
    in>>t.tu>>t.mau;
    t.rg(); 
    return in;
}

ostream& operator << (ostream &out, ps t)
{
    out<<t.tu<<"/"<<t.mau;
    return out;
}

int main()
{
    ps a, b;
    cin>>a>>b;
    cout<<a+b;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// cấu trúc phân số
struct ps
{
    int tu, mau;
    ps rg()
    {
        int uoc = __gcd(tu, mau);      // hàm __gcd tìm UCLN của tử với mẫu nhe
        tu /= uoc;                     // tu /= uoc là cách viết tắt của tu = tu/uoc  
        mau /= uoc;
        if(mau < 0)                    // nếu mẫu âm thì chuyển lên tử (vd: 1/-2 = -1/2)
        {
            tu = -tu;
            mau = -mau;
        }
        return *this;
    }
};

istream& operator >> (istream &in, ps &t)
{
    in>>t.tu>>t.mau;
    return in;
}

ostream& operator << (ostream &out, ps t)
{
    out<<t.tu<<"/"<<t.mau;
    return out;
}

bool operator == (ps t, ps h)
{
    return t.tu==h.tu && t.mau==h.mau;
}

bool operator != (ps t, ps h)
{
    return !(t==h);
}

// cấu trúc hỗn số
struct hs
{
    int n;        // phần nguyên
    ps p;         // phần phân số
    void doips()
    {
        p.tu = n*p.mau + p.tu;
        p.mau = p.mau;
        p.rg();
        cout<<p;
    }
    void doihs()
    {
        p.rg();
        if(p.tu < p.mau)
        {
            cout<<n<<" "<<p;
        }
        else
        {
            int x = p.tu - p.mau;
            p.tu = x;
            n += x;
            cout<<n<<" "<<p;
        }
    }
    int ttp()
    {
        int res = n + p.tu + p.mau;
        return res;
    }
    bool operator > (hs t)
    {
        if (ttp() > t.ttp())
            return true;
        else
            return false;
    }
};

istream& operator >> (istream &in, hs &t)
{
    in>>t.n>>t.p;
    return in;
}

ostream& operator << (ostream &out, hs t)
{
    out<<t.n<<" "<<t.p;
    return out;
}

bool operator == (hs t, hs h)
{
    if(t.n == h.n)
        return t.p.tu==h.p.tu && t.p.mau==h.p.mau;
    else
        return false;
}

bool operator != (hs t, hs h)
{
    return !(t==h);
}

int main()
{
    hs a, b;        // nhập 2 hỗn số
    cin>>a>>b;
    string s;
    cin>>s;
    if(s == "true")
    {
        if(a != b)
        {
            cout<<"TRUE"<<"\n";
        }
        else
        {
            cout<<"FALSE"<<"\n";
        }
        if(a > b)
        {
            cout<<"TRUE"<<"\n";
        }
        else
        {
            cout<<"FALSE"<<"\n";
        }
        a.doihs();
        cout<<"\n";
        b.doihs();
    }
    if(s == "false")
    {
        if(a != b)
        {
            cout<<"TRUE"<<"\n";
        }
        else
        {
            cout<<"FALSE"<<"\n";
        }
        if(a > b)
        {
            cout<<"TRUE"<<"\n";
        }
        else
        {
            cout<<"FALSE"<<"\n";
        }
        a.doips();
        cout<<"\n";
        b.doips();
    }
    return 0;
}

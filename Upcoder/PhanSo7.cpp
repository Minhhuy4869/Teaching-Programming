#include <bits/stdc++.h>
using namespace std;

struct ps
{
    int tu, mau;
    ps rg()
    {
        int uoc = abs(__gcd(tu, mau)); // Sử dụng hàm abs() - lấy trị tuyệt đối để đảm bảo ước chung luôn dương
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

istream& operator >> (istream& in, ps &p)
{
    in>>p.tu>>p.mau;
    return in;
}

ostream& operator << (ostream& out, ps p)
{
    if(p.tu == 0)
        out<<0;
    else
        out<<p.tu<<'/'<< p.mau;
    return out;
}

ps operator + (ps a, ps b)
{
    ps res;
    res.tu = a.tu * b.mau + a.mau * b.tu;
    res.mau = a.mau * b.mau;
    return res.rg();
}

ps operator - (ps a, ps b)
{
    ps res;
    res.tu = a.tu * b.mau - a.mau * b.tu;
    res.mau = a.mau * b.mau;
    return res.rg();
}

ps operator * (ps a, ps b)
{
    ps res;
    res.tu = a.tu * b.tu;
    res.mau = a.mau * b.mau;
    return res.rg();
}

ps operator / (ps a, ps b)
{
    ps res;
    res.tu = a.tu * b.mau;
    res.mau = a.mau * b.tu;
    return res.rg();
}

int main()
{
    ps p, q;
    cin>>p;
    if(p.mau == 0)
    {
        cout<<-1;
        return 0;
    }
    cin>>q;
    if(q.mau == 0)
    {
        cout<<-1;
        return 0;
    }
    cout<<p+q<<endl;
    cout<<p-q<<endl;
    cout<<p*q<<endl;
    if(q.tu != 0)      // muốn chia thì mẫu phải khác 0 nhe
    {
        cout<<p/q;
    }
    return 0;
}

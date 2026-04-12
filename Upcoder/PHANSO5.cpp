#include <bits/stdc++.h>
using namespace std;

struct ps
{
    int tu, mau;
};

istream& operator >> (istream& in, ps &p)
{
    in>>p.tu>>p.mau;
    return in;
}

ostream& operator << (ostream& out, ps p)
{
    out<<p.tu<<"/"<< p.mau;
    return out;
}

ps& operator ++ (ps &p)
{
    p.tu += 1;
    return p;
}

ps& operator -- (ps &p)
{
    p.tu -= 1;
    return p;
}

int main()
{
    ps p;
    string s;
    cin>>p;
    cout<<p<<"\n";
    cin>>s;
    if(s == "++")
    {
        ++p;
        cout<<p;
    }
    if(s == "--")
    {
        --p;
        cout<<p;
    }
    return 0;
}

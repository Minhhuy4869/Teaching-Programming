#include <bits/stdc++.h>
using namespace std;

struct Time 
{
    int gio, phut, giay;
    int timestamp() 
    {
        return gio*3600 + phut*60 + giay;
    }
};

istream &operator >> (istream &in, Time &t) 
{
    in>>t.gio>>t.phut>>t.giay;
    return in;
}

ostream &operator << (ostream &out, Time t) 
{
    out<<t.gio<<":"<<t.phut<<":"<<t.giay;
    return out;
} 

bool operator < (Time a, Time b) 
{
    return a.timestamp() < b.timestamp();
}

Time operator + (Time a, Time b) 
{
    Time res;
    res.gio = a.gio + b.gio;
    res.phut = a.phut + b.phut;
    res.giay = a.giay + b.giay;
    return res;
}

int operator + (Time t, int n) 
{
    return t.timestamp() + n;
}

int main() 
{
    Time a, b;
    cin>>a>>b;
    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<a.timestamp()<<"\n";
    cout<<b.timestamp()<<"\n";
    cout<<(a < b ? "true" : "false");
    return 0;
}

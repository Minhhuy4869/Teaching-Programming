#include <bits/stdc++.h>
using namespace std;

struct tg
{
    int gio, phut, giay;
    int ts()
    {
        return gio*3600 + phut*60 + giay;
    }
};

istream& operator >> (istream &in, tg &p)
{
    in>>p.gio>>p.phut>>p.giay;
    return in;
}

ostream& operator << (ostream &out, tg p)
{
    out<<p.gio<<":"<<p.phut<<":"<<p.giay;
    return out;
}

bool operator < (tg a, tg b)
{
    return a.ts() < b.ts();
}

tg operator + (tg a, tg b)
{
    tg res;
    res.gio = a.gio + b.gio;
    res.phut = a.phut + b.phut;
    res.giay = a.giay + b.giay;
    return res;
}

int operator + (tg p, int x)
{
    return p.ts() + x;
}

template <class T>
struct arr
{
    int n = 0;
    T a[100];

    T sln()
    {
        T res = a[0];
        for(int i=1; i<n; ++i)
        {
            if (res < a[i])
            {
                res = a[i];
            }
        }
        return res;
    }

    int tong()
    {
        int res = a[0] + 0;
        for(int i=1; i<n; ++i)
        {
            res = a[i] + res;
        }
        return res;
    }
};

template <class T>
istream& operator >> (istream &in, arr<T> &p)
{
    while(in>>p.a[p.n])
    {
        p.n++;
    }
    return in;
}

template <class T>
void check()
{
    arr<T> p;
    cin>>p;
    cout<<p.sln()<<"\n";
    cout<<p.tong()<<"\n";
}

int main()
{
    char c;
    cin>>c;
    if(c == 'N') 
        check<int>();
    if(c == 'T') 
        check<tg>();
    return 0;
}

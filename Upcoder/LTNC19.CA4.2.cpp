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

template <class T>
struct arr 
{
    int n = 0;
    T a[100];
    T GTLN() 
    {
        T res = a[0];
        for(int i=1; i<n; ++i)  
        {
            if(res < a[i]) 
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
    in >> p.a[p.n];
    p.n++;
    return in;
}

int main() 
{
    char c;
    arr<int> a_int;
    arr<Time> a_tg;
    while (cin>>c) 
    {
        if(c == 'N') 
            cin>>a_int;
        if(c == 'T') 
            cin>>a_tg;
    }
    if(a_tg.n == 0) 
    {
        cout<<"khong co\nkhong co\n";
    }
    else 
    {
        cout<<a_tg.GTLN()<<"\n";
        cout<<a_tg.tong();
    }
    if(a_int.n == 0) 
    {
        cout<<"khong co\nkhong co\n";
    }
    else 
    {
        cout<<a_int.GTLN()<<"\n";
        cout<<a_int.tong();
    }
    return 0;
}

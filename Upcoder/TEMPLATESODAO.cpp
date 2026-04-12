#include <bits/stdc++.h>
using namespace std;

// cấu trúc số đảo
struct sd
{
    int n;
    
    int sodao()
    {
        int tmp = n;
        int res = 0;
        while(tmp > 0)
        {
            res = res*10 + tmp%10;
            tmp /= 10;
        }
        return res;
    }
};

istream& operator >> (istream &in, sd &p)
{
    in>>p.n;
    return in;
}

ostream& operator << (ostream &out, sd p)
{
    out<<"[SoDao] "<<p.n;
    return out;
}

bool operator > (sd a, sd b)
{
    return a.sodao() > b.sodao();
}

int operator + (sd p, int x)
{
    return p.sodao() + x;
}

template <class T>
struct arr
{
    T a[1000];
    int n = 0;

    int ts()        // ts là tổng số nhe
    {
        int res = 0;
        for(int i=0; i<n; ++i)
        {
            res = a[i] + res;
        }
        return res;
    }

    T sln()         // sln là số lớn nhất nhe
    {
        T res = a[0];
        for(int i=1; i<n; ++i)
        {
            if(a[i] > res)
            {
                res = a[i];
            }
        }
        return res;
    }
};

template <class T>
istream& operator >> (istream &in, arr<T> &p)
{
    in>>p.a[p.n];
    p.n++;
    return in;
}

template <class T>
ostream& operator << (ostream &out, arr<T> p)
{
    if(p.n == 0)
    {
        out<<"khong co\nkhong co\n";
    }
    else
    {
        out<<p.ts()<<"\n";
        out<<p.sln()<<"\n";
    }
    return out;
}

int main()
{
    char c; 
    arr<int> t;
    arr<sd> d;
    while(cin>>c)
    {
        if(c == 'T') 
            cin>>t;
        if(c == 'D') 
            cin>>d;
    }
    cout<<t;
    cout<<d;
    return 0;
}

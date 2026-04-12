#include <bits/stdc++.h>
using namespace std;

struct ps
{
    int tu, mau;
};

istream& operator >> (istream &in, ps &p)
{
    in>>p.tu>>p.mau;
    return in;
}

ostream& operator << (ostream &out, ps p)
{
    out<<p.tu<<'/'<<p.mau;
    return out;
}

bool operator < (ps a, ps b)
{
    return a.tu*b.mau < a.mau*b.tu;
}

template <class T>
struct arr
{
    T a[100];
    int n = 0;
    
    T timMin()
    {
        T res = a[0];
        for(int i=1; i<n; ++i)
        {
            if(a[i] < res)
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
    in >> p.a[p.n];
    p.n++;
    return in;
}

template <class T>
ostream& operator << (ostream &out, arr<T> p)
{
    if(p.n == 0)
    {
        out<<"khong co";
    }
    else
    {
        out<<p.timMin();
    }
    return out;
}

int main()
{
    char k;
    arr<int> a;         // mảng số nguyên
    arr<float> b;       // mảng số thực
    arr<ps> c;          // mảng phân số 
    while(cin>>k)
    {
        if(k == 'a') 
            cin>>a;
        if(k == 'b') 
            cin>>b;
        if(k == 'c') 
            cin>>c;
    }
    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<c;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

struct HCN
{
    double dai, rong;
    double cv()
    {
        return (dai+rong)*2;
    }
};

istream& operator >> (istream &in, HCN &h)
{
    in>>h.dai>>h.rong;
    return in;
} 

ostream& operator << (ostream &out, HCN h)
{
    out<<"[HCN] "<<h.dai<<","<<h.rong;
    return out;
}

bool operator < (HCN a, HCN b)
{
    return a.cv() < b.cv();
}

double operator + (HCN a, double n)
{
    return a.cv() + n;
}

bool operator == (HCN h, int n)
{
    return true;
}

template <class T>
struct arr
{
    T a[1000];
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

    double sum()
    {
        double res = 0;
        for(int i=0; i<n; ++i)
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
void check(char c)
{
    arr<T> p;
    cin>>p;
    cout<<p.timMin()<<"\n";
    if(c == 'H') 
        cout<<fixed<<setprecision(1);
    cout<<p.sum();
}

int main()
{
    char c; 
    cin>>c;
    if(c == 'N') 
        check<int>('N');
    if(c == 'H') 
        check<HCN>('H');
    return 0;
}

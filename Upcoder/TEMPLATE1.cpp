#include <bits/stdc++.h>
using namespace std;

struct Oxy
{
    int x, y;
};

struct Oxyz
{
    int x, y, z;
};

istream& operator >> (istream &in, Oxy &p)
{
    in>>p.x>>p.y;
    return in;
}

ostream& operator << (ostream &out, Oxy p)
{
    out<<'('<<p.x<<','<<p.y<<')';
    return out;
}

double operator - (Oxy a, Oxy b)
{
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

bool operator < (Oxy a, Oxy b)
{
    if(a.x == b.x) 
        return a.y < b.y;
    return a.x < b.x;
}

istream& operator >> (istream &in, Oxyz &p)
{
    in>>p.x>>p.y>>p.z;
    return in;
}

ostream& operator << (ostream &out, Oxyz p)
{
    out<<'('<<p.x<<','<<p.y<<','<<p.z<<')';
    return out;
}

double operator - (Oxyz a, Oxyz b)
{
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));
}

bool operator < (Oxyz a, Oxyz b)
{
    if(a.x != b.x) 
        return a.x < b.x;
    if(a.y != b.y) 
        return a.y < b.y;
    return a.z < b.z;
}

template <class T>
struct arr
{
    T a[100];
    int n = 0;
    double kcMax()
    {
        double res = 0;
        for(int i=0; i<n; ++i)
        {
            for(int j=i+1; j<n; ++j)
            {
                if(res < a[i] - a[j])
                {
                    res = a[i] - a[j];
                }
            }
        }
        return res;
    }

    void sxUp()
    {
        for(int i=1; i<n; ++i)
        {
            int j = i;
            while(j>0 && a[j]<a[j-1])
            {
                swap(a[j], a[j-1]);
                j--;
            }
        }
    }

    void sxDown()
    {
        for(int i=1; i<n; ++i)
        {
            int j = i;
            while(j>0 && a[j-1] < a[j])
            {
                swap(a[j-1], a[j]);
                j--;
            }
        }
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
    for(int i=0; i<p.n; ++i)
    {
        out<<p.a[i];
        if(i < p.n-1) 
            out<<" ";
    }
    return out;
}

int main()
{
    string s;
    arr<Oxy> a2;        // số 2 nghĩa là 2 chiều
    arr<Oxyz> a3;       // số 3 nghĩa là 3 chiều
    while(cin>>s)
    {
        if(s == "Oxy") 
            cin>>a2;
        if(s == "Oxyz") 
            cin>>a3;
    }
    a2.sxUp();
    cout<<a2<<"\n";
    a3.sxDown();
    cout<<a3<<"\n";
    cout<<roundf(a2.kcMax()*1000)/1000<<"\n";
    cout<<roundf(a3.kcMax()*1000)/1000;
    return 0;
}

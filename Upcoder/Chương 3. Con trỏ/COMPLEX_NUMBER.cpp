#include <bits/stdc++.h>
using namespace std;

struct sp
{
    int thuc, ao;
    double md()
    {
        return sqrt(thuc*thuc + ao*ao);
    }
};

istream& operator >> (istream &in, sp &z)
{
    in>>z.thuc>>z.ao;
    return in;
}

ostream& operator << (ostream &out, sp z)
{
    out<<"{";
    if(z.thuc != 0) 
        out<<z.thuc;
    if(z.ao != 0)
    {
        if(z.ao > 0 && z.thuc != 0) 
            out<<"+";
        if(z.ao < 0) 
            out<<"-";
        if(abs(z.ao) != 1) 
            out<<abs(z.ao);
        out<<"i";
    }
    out<<"}";
    return out;
}

sp operator + (sp a, sp b)
{
    sp res;
    res.thuc = a.thuc + b.thuc;
    res.ao = a.ao + b.ao;
    return res;
}

sp operator - (sp a, sp b)
{
    sp res;
    res.thuc = a.thuc - b.thuc;
    res.ao = a.ao - b.ao;
    return res;
}

struct dsp
{
    int n;
    sp *a;
    sp tong()
    {
        sp res = *a;
        for(int i=1; i<n; ++i)
        {
            res = res + *(a + i);
        }
        return res;
    }
    sp hieu()
    {
        sp res = *a;
        for(int i=1; i<n; ++i)
        {
            res = res - *(a + i);
        }
        return res;
    }
    void md()
    {
        cout<<fixed<<setprecision(2);
        for(int i=0; i<n; ++i)
        {
            cout<<a[i].md()<<" ";
        }
    }
};

istream& operator >> (istream &in, dsp &p)
{
    p.n = 0;
    p.a = new sp[100];
    while(in >> p.a[p.n])
    {
        p.n++;
    }
    return in;
}

ostream& operator << (ostream &out, dsp p)
{
    for(int i=0; i<p.n; ++i)
    {
        out<<*(p.a + i)<<" ";
    }
    return out;
}

int main()
{
    dsp p; 
    cin>>p;
    cout<<p<<"\n";
    p.md(); 
    cout<<"\n";
    cout<<p.tong();
    return 0;
}

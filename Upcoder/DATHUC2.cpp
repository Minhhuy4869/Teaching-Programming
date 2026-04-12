#include <bits/stdc++.h>
using namespace std;

struct dt
{
    int a, b;    
};

istream& operator >> (istream& in, dt& p)
{
    in>>p.a>>p.b;
    return in;
}

ostream& operator << (ostream& out, dt& q)
{
    if (q.b>0)
        out<<q.a<<'x'<<'+'<<q.b;
    else if (q.b<0)
        out<<q.a<<'x'<<q.b;
    else
        out<<q.a;
    return out;
}

int val (dt& p, int x)
{
    int s = p.a*x+p.b;
    return s;
}

dt operator + (dt& p, dt& q)
{
    dt k;
    k.a = p.a + q.a;
    k.b = p.b + q.b;
    return k;
}

bool operator == (dt &p, dt& q)
{
    int m = p.a+p.b;
    int h = q.a+q.b;
    if (m==h)
        return true;
    return false;
}

bool operator != (dt& p, dt& q)
{
    return !(p==q);
}

int main()
{
    dt p, q;
    cin>>p>>q;
    int x;
    cin>>x;
    cout<<p<<endl;
    cout<<q<<endl;
    dt k = p+q;
    cout<<p<<'+'<<q<<'='<<k<<endl;
    cout<<val(p,x)<<endl;
    cout<<val(q,x)<<endl;
    if (p==q)
        cout<<"TRUE";
    else
        cout<<"FALSE";
    return 0;
}

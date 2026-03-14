#include <bits/stdc++.h>
using namespace std;

struct hcn
{
    float d, r;
};

istream& operator >> (istream& in, hcn& p)
{
    in>>p.d>>p.r;
    return in;
}

ostream& operator << (ostream& out, hcn& p)
{
    out<<"[HCN] "<<p.d<<','<<p.r;
    return out;
}

float chuvi (hcn p)
{
    return (p.d+p.r)*2;
}

bool operator < (hcn p, hcn q)
{
    return chuvi(p) < chuvi(q);
}

float operator + (hcn p, float x)
{
    return chuvi(p) + x;
}
int main()
{
    hcn a, b;
    cin>>a>>b;
    cout<<a<<"\n"<<b<<"\n";
    if(chuvi(a) < chuvi(b))
        cout<<"true";
    else
        cout<<"false";
    return 0;
}

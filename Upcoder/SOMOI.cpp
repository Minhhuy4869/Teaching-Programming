#include <bits/stdc++.h>
using namespace std;

struct sm
{
    int k;
};

istream& operator >> (istream& in, sm& a)
{
    in>>a.k;
    return in;
}

ostream& operator << (ostream& out, sm a)
{
    out<<"[SoMoi] "<<a.k;
    return out;
}

int tcs (int n)    // tcs = tổng chữ số
{
    int s=0;
    while (n!=0)
    {
        s += n%10;
        n/=10;
    }
    return s;
}

bool operator > (sm a, sm b)
{
    int p = tcs(a.k);
    int q = tcs(b.k);
    if(p > q)
        return true;
    return false;
}

sm operator + (sm p, sm q)
{
    sm r;
    r.k = tcs(p.k) + tcs(q.k);
    return r;
}    

int main()
{
    sm a, b;
    cin>>a>>b;
    cout<<a<<endl;
    cout<<b<<endl;
    if(a > b)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    sm k = a+b;
    cout<<k;
    return 0;
}

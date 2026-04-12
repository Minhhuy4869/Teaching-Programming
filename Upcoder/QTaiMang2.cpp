#include <iostream>
#include <algorithm>
using namespace std;

struct arr
{
    int n, a[100];               
};

istream& operator >> (istream& in, arr &t)
{
    in>>t.n;                   
    for(int i=0; i<t.n; ++i)
    {
        in>>t.a[i];
    }
    return in;
}

ostream& operator << (ostream& out, arr t)  
{
    for(int i=0; i<t.n; ++i)
    {
        out<<t.a[i]<<" ";
    }
    return out;
}

arr operator + (arr t, arr h)
{
    arr res;
    res.n = max(t.n, h.n);      
    for(int i=0; i<res.n; ++i)
    {
        res.a[i] = 0;           
        if (i < t.n) 
            res.a[i] += t.a[i]; 
        if (i < h.n) 
            res.a[i] += h.a[i]; 
    }
    return res;
}

int main()
{
    arr t, h;
    cin>>t>>h;
    cout<<t+h;
    return 0;
}

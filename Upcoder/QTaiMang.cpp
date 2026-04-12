#include <bits/stdc++.h>
using namespace std;

struct arr
{
    int n, a[100];
    arr& operator = (arr &t)
    {
        n = t.n; 
        for(int i=0; i<n; ++i)
        {
            a[i] = t[i];        
        }
        return *this;            
    }
    int& operator [] (int idx)
    {
        return a[idx];
    }
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

arr operator + (arr h, arr k)
{
    arr res;
    res.n = max(h.n, k.n);      
    for(int i=0; i<res.n; ++i)
    {
        res.a[i] = 0;           
        if(i < h.n) 
            res.a[i] += h.a[i]; 
        if(i < k.n) 
            res.a[i] += k.a[i]; 
    }
    return res;
}

bool operator == (arr t, arr h)
{
    if(t.n != h.n) 
        return false;       
    for(int i=0; i<t.n; ++i)
    {
        if(t.a[i] != h.a[i])
        {
            return false;   
        }
    }
    return true;            
}

bool operator != (arr t, arr h)
{
    return !(t == h);
}

int main()
{
    arr t, h;
    cin>>t>>h;
    if(t == h)
        cout<<"yes";
    else 
        cout<<"no";
    return 0;
}

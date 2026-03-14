#include <bits/stdc++.h>
using namespace std;

struct point
{
    int x, y;
};

istream& operator >> (istream& in, point &a)
{
    in>>a.x>>a.y;
    return in;
}

ostream& operator << (ostream& out, point a)
{
    out<<'('<<a.x<<','<<a.y<<')';
    return out;
}

bool operator == (point a, point b)
{
    return (a.x == b.x) && (a.y == b.y);
}

point operator + (point a, point b)
{
    point res;
    res.x = a.x + b.x; 
    res.y = a.y + b.y; 
    return res;        
}

bool operator < (point a, point b)
{
    if(a.x == b.x)
        return a.y < b.y;
    return a.x < b.x; 
}

int main()
{
    point a[100];    // mảng chứa tối đa 1000 điểm (point)
    int n = 0;       // Biến n để đếm xem thực tế mình đã nhập bao nhiêu điểm
    while(cin>>a[n]) 
    {
        n++;
    }
    point Max = a[0], s = {0,0};
    for(int i=1; i<n; ++i)
    {
        if (Max < a[i])
            Max = a[i];
    }
    for(int i=0; i<n; ++i)
    {
        s = s + a[i];
    }
    cout<<Max<<"\n";
    cout<<s;
    return 0;
}

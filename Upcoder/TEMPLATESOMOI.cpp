#include <bits/stdc++.h>
using namespace std;

// cấu trúc số mới
struct sm
{
    int n;
    int tcs()       // tcs là tổng chữ số nhe
    {
        int res = 0, tmp = n;
        while(tmp > 0)
        {
            res += tmp % 10;
            tmp /= 10;
        }
        return res;
    }
};

istream& operator >> (istream &in, sm &p)
{
    in>>p.n;
    return in;
}

ostream& operator << (ostream &out, sm p)
{
    out<<"[SoMoi] "<<p.n;
    return out;
}

bool operator > (sm a, sm b)
{
    return a.tcs() > b.tcs();
}

sm operator + (sm a, sm b)
{
    sm res;
    res.n = a.tcs() + b.tcs();
    return res;
}

int operator + (sm s, int n)
{
    return n + s.tcs();
}

bool operator == (sm a, sm b)
{
    return a.n == b.n;
}

template <class T>
struct arr
{
    T a[1000];
    int n = 0;

    int tds()       // tds là tổng dãy số nhe 
    {
        int res = 0;
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
ostream& operator << (ostream &out, arr<T> p)
{
    T max = p.a[0];
    int cnt = 1;            // cnt là viết tắt của count - biến đếm 

    for(int i=1; i<p.n; ++i)
    {
        if(p.a[i] == max)
        {
            cnt++;
        }
        if(p.a[i] > max)
        {
            max = p.a[i];
            cnt = 1;
        }
    }
    out<<max<<"\n";
    out<<cnt<<"\n";
    return out;
}

template <class T>
void check(char c)
{
    arr<T> p;
    cin>>p;
    cout<<p;
    if(c == 'M') 
        cout<<"[SoMoi]";
    cout<<p.tds();
}

int main()
{
    char c; 
    cin>>c;
    if(c == 'N') 
        check<int>('N');
    if(c == 'M') 
        check<sm>('M');
    return 0;
}

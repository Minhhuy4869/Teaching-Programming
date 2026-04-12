#include <bits/stdc++.h>
using namespace std;

// bài này hàm rút gọn ps được viết bên ngoài struct, tham khảo nhe. Viết ngoài hay trong đều được cả, cách nào dễ hơn thì bé học nha

struct ps
{
    int tu, mau;
};

istream& operator >> (istream& in, ps &p)
{
    in>>p.tu>>p.mau;
    return in;
}

ostream& operator << (ostream& out, ps &p)
{
    out<<p.tu<<"/"<<p.mau;
    return out;
}

bool operator < (ps &a, ps &b)
{
    return a.tu*b.mau < b.tu*a.mau;
}

ps rg (ps &p)
{
    int uoc = __gcd(p.tu, p.mau);
    p.tu /= uoc;
    p.mau /= uoc;
    return p;
}

int main()
{
    int n;
    cin>>n;
    ps a[20];    // do mảng ps đề cho có tối đa 20 phần tử 
    int i = 0;
    while(cin>>a[i].tu>>a[i].mau)
    {
        ++i;
        if(i >= 20)
            return 0;
    }
    sort(a, a+n);    // hàm sắp xếp mảng
    for(int i=0; i<n; ++i)
    {
        a[i] = rg(a[i]);
        cout<<a[i]<<" ";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

struct diem
{
    int x, y;
};

istream& operator >> (istream& in, diem& a)
{
    in>>a.x>>a.y;
    return in;
}

ostream& operator << (ostream& out, diem& a)
{
    out<<'('<<a.x<<','<<a.y<<')';
    return out;
}

float dodai (diem& a, diem& b)
{
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}

float chuvi (diem& a, diem& b, diem& c)
{
    return dodai(a,b)+dodai(a,c)+dodai(b,c);
}

float dientich (diem& a, diem& b, diem& c)
{
    float p = chuvi(a,b,c)/2;
    return sqrt(p*(p-dodai(a,b))*(p-dodai(a,c))*(p-dodai(b,c)));
}

int main()
{
    diem a, b, c;
    cin>>a>>b>>c;
    cout<<a<<" "<<b<<" "<<c<<endl;
    cout<<fixed<<setprecision(3)<<dodai(a,b)<<endl;
    cout<<fixed<<setprecision(3)<<dodai(a,c)<<endl;
    cout<<fixed<<setprecision(3)<<dodai(b,c)<<endl;
    if(dodai(a,b)+dodai(b,c) == dodai(a,c))
        cout<<-1;
    else if (dodai(a,b)+dodai(a,c) == dodai(b,c))
        cout<<-1;
    else if (dodai(a,c)+dodai(b,c) == dodai(a,b))
        cout<<-1;
    else
        cout<<fixed<<setprecision(3)<<dientich(a,b,c)<<" "<<chuvi(a,b,c);
    return 0;
}

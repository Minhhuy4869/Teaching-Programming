#include <bits/stdc++.h>
using namespace std;

const double eps = 1e-9; 

struct diem
{
    double x, y;
    double kc(diem p)       // hàm tính khoảng cách từ điểm mặc định (this) tới điểm p
    {
        return sqrt(pow(p.x-x, 2) + pow(p.y-y, 2));
    }
}; 

istream& operator >> (istream &in, diem &p)
{
    in>>p.x>>p.y;
    return in;
}

ostream& operator << (ostream &out, diem p)
{
    out<<"("<<p.x<<","<<p.y<<")";
    return out;
}

bool kttg(double ab, double bc, double ca)
{
    return ab + bc > ca && ab + ca > bc && bc + ca > ab;
}

bool tgv(double ab, double bc, double ca)
{
    return abs(ab*ab + bc*bc - ca*ca) < eps || 
           abs(bc*bc + ca*ca - ab*ab) < eps || 
           abs(ab*ab + ca*ca - bc*bc) < eps;
}

char gv(double ab, double bc, double ca)
{
    if(abs(ab*ab + bc*bc - ca*ca) < eps) 
        return 'B';
    if(abs(bc*bc + ca*ca - ab*ab) < eps) 
        return 'C';
    if(abs(ab*ab + ca*ca - bc*bc) < eps) 
        return 'A';
    return ' ';
}

int main()
{
    diem a, b, c;
    double ab, bc, ca;
    cin>>a>>b>>c;
    ab = a.kc(b);
    bc = b.kc(c);
    ca = c.kc(a);
    cout<<a<<","<<b<<","<<c<<"\n";
    if (kttg(ab, bc, ca)) 
    { 
        cout<<"CO\n";
        if (tgv(ab, bc, ca)) 
        {
            cout<<gv(ab, bc, ca);
        }
    } 
    else 
    {
        cout<<"KHONG";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    char* hoTen;
    int namSinh;
    float diem[3];
    double dtb()
    {
        double res = 0;
        for(int i=0; i<3; ++i)
        {
            res += diem[i];
        }
        return res/3;
    }
};

void nhap(SinhVien a[], int n)
{
    for(int i=0; i<n; ++i)
    {
        a[i].hoTen = new char[50];
        cin.getline(a[i].hoTen, 50);
        cin>>a[i].namSinh;
        cin>>a[i].diem[0]>>a[i].diem[1]>>a[i].diem[2];
        cin.ignore();
    }
}

void sx(SinhVien a[], int n)
{
    for(int i=0; i<n; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {
            if(a[i].dtb() < a[j].dtb())
            {
                swap(a[i], a[j]);
            }
        }
    }
}

void in(SinhVien a[], int n)
{
    for(int i=0; i<n; ++i)
    {
        cout<<i+1<<" - ";
        cout<<a[i].hoTen<<" - ";
        cout<<a[i].namSinh<<" - ";
        cout<<fixed<<setprecision(2);
        cout<<a[i].dtb();
        cout<<"\n";
    }
}

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    SinhVien a[n];
    nhap(a, n);
    sx(a, n);
    in(a, n);
    for(int i=0; i<n; ++i)
    {
        delete[] a[i].hoTen;
    }
    return 0;
}

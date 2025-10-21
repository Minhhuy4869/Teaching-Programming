// Viết chương trình nhập số nguyên dương n. Kiểm tra n có phải là số nguyên tố hay không ?

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if (n < 2)
    {
        cout<<"so nguyen to dau tien la so 2, vui long nhap lai ";
        return 0;
    }
    for (int i=2; i<sqrt(n); ++i)
    {
        if (n%i==0)
        {
            cout<<n<<" khong phai la so nguyen to";
            return 0;
        }
    }
    cout<<n<<" la so nguyen to";
    return 0;
}
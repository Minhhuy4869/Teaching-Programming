/*
Viết chương trình tính diện tích và chu vi các hình: tam giác, hình vuông, hình chữ
nhật và hình tròn với những thông tin cần được nhập từ bàn phím.
*/

// tam giác
#include <iostream>
#include <cmath> // thư viện dùng sqrt
using namespace std;

int main()
{
    cout<<"nhập vào 3 cạnh của tam giác: ";
    int a, b, c;
    cin>>a>>b>>c;
    /* Sử dụng công thức Herong: Với p = (a+b+c)/2 (p là nửa chu vi của tam giác)
    Suy ra diện tích tam giác là: S = sqrt(p*(p-a)*(p-b)*(p-c))
    */
    double p = (a+b+c)/2; 
    cout<<"diện tích tam giác la: "<<(double)(sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}

// hình vuông
#include <iostream>
using namespace std;

int main()
{
    cout<<"nhập vào cạnh của hình vuông: ";
    int n;
    cin>>n;
    // Công thức diện tích hv: canh*canh
    cout<<"diện tích hình vuông là: "<<n*n;
    return 0;
}

// hình chữ nhật
#include <iostream>
using namespace std;

int main()
{
    cout<<"nhập vào chiêu dài và chiều rộng của hình chữ nhật: ";
    int d, r;
    cin>>d, r;
    // Công thức diện tích hcn: dai*rong
    cout<<"diện tích hình chữ nhật là: "<<d*r;
    return 0;
}
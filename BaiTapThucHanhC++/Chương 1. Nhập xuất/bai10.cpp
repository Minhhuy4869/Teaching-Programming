/*
Viết chương trình nhập vào 4 số nguyên a, b, c, d. Tính giá trị trung bình cộng của
4 số trên và in kết quả ra màn hình.
*/

#include <iostream>
using namespace std;

int main()
{
    cout<<"nhập vào 4 số nguyên a, b, c, d: ";
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    cout<<"giá trị trung bình cộng của 4 số trên la: "<<(float)(a+b+c+d)/4;
    return 0;
}
/*
Viết chương trình nhập vào 2 số nguyên dương a và b, cho biết kết quả 
chia lấy phần nguyên và phần dư của a với b.
*/

#include <iostream>
using namespace std;

int main()
{
    cout<<"Nhap vao 2 so nguyen duong: ";
    int a, b;
    cin>>a>>b;
    cout<<"Ket qua chia lay nguyen la: ";
    cout<<a/b<<endl;
    cout<<"Ket qua chia lay phan du la: ";
    cout<<a%b;
    return 0;
}
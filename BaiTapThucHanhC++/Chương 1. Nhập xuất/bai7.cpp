/*
Viết chương trình cho phép nhập vào giờ, phút và giây, hãy đổi sang giây và in kết quả ra màn hình.
*/

#include <iostream>
using namespace std;

int main()
{
    cout<<"nhập vào giờ, phút và giây: ";
    int h, m, s;
    cin>>h>>m>>s;
    cout<<"số giây tương ứng là: ";
    cout<<h*3600 + m*60 + s;
    return 0;
}
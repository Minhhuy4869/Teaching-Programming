/*
Viết chương trình nhập một số nguyên dương N có 2 chữ số từ bàn phím, xuất ra
màn hình tổng các chữ số của N.
Ví dụ: Nhập N = 48, kết quả in ra màn hình là: 4+8=12
*/

#include <iostream>
using namespace std;

int main()
{
    cout<<"Nhap vao so nguyen duong N: ";
    int n;
    cin>>n;
    cout<<"Tong cac chu so cua N la: ";
    cout<<n/10 + n%10;
    return 0;
}
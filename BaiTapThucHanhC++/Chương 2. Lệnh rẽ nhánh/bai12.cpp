/*
Nhập vào hai số nguyên a, b. In ra màn hình giá trị lớn nhất.
*/

#include <iostream>
using namespace std;

int main() 
{
    // Khai báo hai biến số nguyên a và b
    int a, b;
    // Nhập giá trị cho a và b từ người dùng
    cout<<"Nhap 2 so nguyen a, b: ";
    cin>>a>>b;
    // Tìm và in ra giá trị lớn nhất
    if (a > b) 
        cout<<"Gia tri lon nhat la: "<<a;
    else if (b > a) 
        cout<<"Gia tri lon nhat la: "<<b;
    else 
        cout<<"Hai so bang nhau, gia tri la: "<<a;
    return 0;
}
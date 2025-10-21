/*
Viết chương trình nhập vào hai số nguyên dương a và b. Tìm ước số chung lớn nhất 
và bội số chung nhỏ nhất của a và b.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int x = a, y = b; // cần tạo bản sao của a, b vì trong while a, b đã bị thay đổi
    // thuật toán euclid tìm ỨCLN
    while (b!=0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    cout<<"Ước chung lớn nhất là: "<<a<<endl; // sau khi thoát vòng lặp, lúc này a là ỨCLN
    cout<<"Bội chung nhỏ nhất là: "<<x*y/a; // bcnn(a,b) = a*b/ucln(a,b)
    return 0;
}
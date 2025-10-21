/*
Viết chương trình nhập vào 2 số nguyên a, b. Tính tổng, hiệu, tích, thương của 2 số 
trên và in kết quả ra màn hình.
*/

#include <iostream>
using namespace std;

int main()
{
    cout<<"nhập vào 2 số nguyên a, b: ";
    int a, b;
    cin>>a>>b;
    cout<<"tong la: "<<a+b<<endl;
    cout<<"hieu la: "<<a-b<<endl;
    cout<<"tich la: "<<a*b<<endl;
    if (b==0)
        cout<<"thuong la: "<<0;
    else
        cout<<"thuong la: "<<a/b;
    return 0;
}
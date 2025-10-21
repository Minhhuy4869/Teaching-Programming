/* 
Viết chương trình liệt kê các ước số của số nguyên dương n.
Ví dụ: n = 12 => các ước số của 12 là 1, 2, 3, 4, 6, 12
*/

#include <iostream>
using namespace std;
int main() 
{
    int n;
    // Nhập số nguyên dương n
    cout<<"Nhap vao so nguyen duong n: ";
    cin>>n;
    // Kiểm tra nếu n không phải là số nguyên dương
    if (n <= 0) 
    {
        cout<<"Vui long nhap so nguyen duong!";
        return 1; // Kết thúc chương trình nếu n không hợp lệ
    }
    // Liệt kê các ước số của n
    cout<<"Cac uoc so cua "<<n<<" la: ";
    for (int i=1; i<=n; ++i) 
    {
        if (n%i==0) 
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
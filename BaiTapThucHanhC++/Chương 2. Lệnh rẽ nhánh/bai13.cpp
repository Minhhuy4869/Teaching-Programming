/*
Bài toán:
Nhập vào 3 số nguyên a, b, c.
Hãy tìm và in ra giá trị lớn nhất trong ba số đó.
*/

#include <iostream> // Thư viện để dùng cout, cin
using namespace std;

int main()
{
    // 1. Khai báo ba biến để lưu 3 số nguyên
    int a, b, c;
    // 2. Nhập 3 số từ bàn phím
    cout << "Nhap 3 so nguyen a, b, c: ";
    cin>>a>>b>>c;
    // 3. Giả sử ban đầu, a là số lớn nhất
    int max = a;
    // 4. So sánh max với b
    if (b > max)
    {
        max = b; // nếu b lớn hơn max hiện tại thì cập nhật max = b
    }
    // 5. So sánh max với c
    if (c > max)
    {
        max = c; // nếu c lớn hơn max hiện tại thì cập nhật max = c
    }
    // 6. In ra kết quả
    cout<<"Gia tri lon nhat la: "<<max;
    return 0; // kết thúc chương trình
}

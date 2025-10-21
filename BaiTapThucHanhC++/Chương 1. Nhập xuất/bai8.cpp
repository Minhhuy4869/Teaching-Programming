/*
Viết chương trình cho phép nhập vào thời gian của một công việc nào đó tính bằng giây. 
Hãy chuyển đổi và in ra màn hình thời gian trên dưới dạng bao nhiêu giờ, bao nhiêu phút, 
bao nhiêu giây.
*/

#include <iostream>
using namespace std;

int main()
{
    cout<<"nhập vào thời gian của một công việc nào đó tính bằng giây: ";
    int s;
    cin>>s;
    cout<<"thời gian trên dưới dạng giờ, phút, giây: ";
    int h = s/3600, m = s/60;
    s = s - h*3600 - m*60;
    cout<<h<<" gio, "<<m<<" phut, "<<s<<" giay";
    return 0;
}
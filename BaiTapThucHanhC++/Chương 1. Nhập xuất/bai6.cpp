/*
Viết chương trình cho phép nhập vào một số đo nhiệt độ theo độ Fahrenheit và
xuất ra nhiệt độ tương đương của nó theo độ Celcius, sử dụng công thức chuyển đổi:
= 5/9*(E − 32)
*/

#include <iostream>
using namespace std;

int main()
{
    cout<<"nhập vào một số đo nhiệt độ theo độ Fahrenheit: ";
    int E;
    cin>>E;
    cout<<"nhiệt độ tương đương của E theo độ Celcius là: ";
    cout<<(float)5/9*(E-32);
    return 0;
}
/*
Viết chương trình nhập số nguyên dương n. Kiểm tra n có phải là số hoàn thiện hay không ?
Gợi ý: số hoàn thiện là số có tổng các ước số của nó (không kể nó) bằng chính nó
*/

#include <iostream>
using namespace std;

int main()
{
    cout<<"Nhập vào số nguyên dương n: ";
    int n;
    cin>>n;
    int tong = 0; 
    for (int i=1; i<n; ++i)
    {
        if (n%i==0)
            tong = tong + i;
    }
    if (tong == n)
        cout<<n<<" là số hoàn thiện";
    else
        cout<<n<<" không là số hoàn thiện";
    return 0;
}
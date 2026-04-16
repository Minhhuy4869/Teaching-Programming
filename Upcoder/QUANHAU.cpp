#include <bits/stdc++.h>
using namespace std;

int n, X[100], dem;
int cot[100], xuoi[100], nguoc[100];

void quaylui(int i)
{
    // Đi thử cột j để đặt con hậu ở hàng thứ i?
    for(int j=1; j<=n; ++j)
    {
        if(cot[j] == 0 && xuoi[i - j + n] == 0 && nguoc[i + j - 1] == 0)
        {
            X[i] = j;
            cot[j] = 1; xuoi[i - j + n] = 1; nguoc[i + j - 1] = 1;
            if(i == n)
            {
                dem++;
            }
            else
            {
                quaylui(i + 1);
            }
            // backtrack
            cot[j] = 0; xuoi[i - j + n] = 0; nguoc[i + j - 1] = 0;
        }
    }
}

int main()
{
    cin>>n;
    quaylui(1);
    cout<<dem;
    return 0;
}

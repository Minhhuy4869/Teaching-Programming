#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, w;
    cin>>n>>w;
    int A[n + 1], C[n + 1];
    for(int i=1; i<=n; ++i)
    {
        cin>>A[i]>>C[i];
    }
    int dp[n + 1][w + 1];
    for(int i=0; i<=n; ++i)
    {
        for(int j=0; j<=w; ++j)
        {
            dp[i][j] = 0;
        }
    }
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=w; ++j)
        {
            // ko chon do vat thu i
            dp[i][j] = dp[i - 1][j];
            // neu trong luong do vat thu i nho hon khoi luong j dang trong
            if(j >= A[i])
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - A[i]] + C[i]);
            }
        }
    }
    cout<<dp[n][w]<<"\n";
    int flag[n + 1] = {0};
    int i = n, j = w;
    while(i > 0 && j > 0)
    {
        if(dp[i][j] != dp[i - 1][j])
        {
            flag[i] = 1; 
            j = j - A[i]; 
        }
        i--; 
    }
    for(int k=1; k<=n; k++) 
    {
        cout<<flag[k]<<" ";
    }
    return 0;
}

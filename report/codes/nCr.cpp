/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 100

using namespace std;

ll dp[N][N];

ll nCr(int n, int r)
{
    if(r==1) return n;
    else if(r==n) return 1;

    if(dp[n][r]!=-1) return dp[n][r];

    return dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
}

int main()
{
    memset(dp,-1,sizeof(dp));
    cout<<nCr(5,2); nl
    cout<<nCr(9,6);

    return 0;
}

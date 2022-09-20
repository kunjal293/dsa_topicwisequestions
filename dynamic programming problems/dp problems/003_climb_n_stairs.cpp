#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int n_stairs(int n,int dp[])
{
    if (n <= 1)
        return dp[n] = 1;

    if (dp[n] != -1) {
        return dp[n];
    }

   dp[n]=n_stairs(n-1,dp)+n_stairs(n-2,dp);
   return dp[n];

}
int countWays(int n)
{
    int dp[n + 1];
    memset(dp, -1, sizeof dp);
    n_stairs(n, dp);
    return dp[n];
}

int main ()
{
    int n ;
    cin>>n;
    cout<<countWays(n);

    return 0;
}

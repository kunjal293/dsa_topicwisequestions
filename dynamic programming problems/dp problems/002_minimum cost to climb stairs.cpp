#include <iostream>
using namespace std;


int minimumCost(int cost[], int n)
{

    int dp[n];


    if (n == 1)
        return cost[0];

    dp[0] = cost[0];
    dp[1] = cost[1];


    for (int i = 2; i < n; i++) {
        dp[i] = min(dp[i - 1], dp[i - 2]) + cost[i];
    }

    return min(dp[n - 2],dp[n-1]);
}

int main()
{
    int a[] = { 16, 19, 10, 12, 18 };
    int n = sizeof(a) / sizeof(a[0]);
    cout << minimumCost(a, n);
    return 0;
}

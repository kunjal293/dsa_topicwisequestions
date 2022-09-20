#include<iostream>
using namespace std;
int dp [0][0];
int count_subset(int arr[] ,int sum,int n  )
{
    if(sum==0)
    {
        return true;

    }
    if(n==0)
    {
        return false;

    }
     //recursive case

    if(dp[n][sum]!=-1)
    {
        return dp[n][sum];
    }
    else{
        if(arr[n-1]>sum)
    {
            return dp[n][sum]=count_subset(arr,sum, n-1);
    }
        else{
            return dp[n][sum]=count_subset(arr,sum, n- 1)+count_subset(arr,sum-arr[n-1], n-1);`
        }
}
int main ()
{
    int arr={2,3,5,6,8,10};
    int n =sizeof(arr)/sizeof(int);
    int sum =0;
    cout<<
    return 0;
}

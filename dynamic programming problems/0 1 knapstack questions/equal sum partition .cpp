#include<iostream>
using namespace std;
bool equal_sum_partiation(int arr[],int n,int sum )
{
    if(sum==0)
    {
        return true;

    }
    if(n==0)
    {
        return false;

    }

    for(int i =0;i<n ;i++)
    {
        sum =sum +n;
        if(sum%2!=0)
        {
            return false;
        }
        else
        {
            return equal_sum_partiation(arr,n,sum/2);
        }
    }
}
int main ()
{
  int arr[] = { 1, 5, 11, 5 };
  int sum =0;
    int n = sizeof(arr) / sizeof(arr[0]);

    if (equal_sum_partiation(arr, n,sum) == true)
        cout << "Can  be divided into two subsets "
                "of equal sum";
    else
        cout << "Can not be divided into two subsets"
                " of equal sum";
    return 0;
}

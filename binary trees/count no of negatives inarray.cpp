#include<iostream>
using namespace std;
int count_negative(int arr[],int n)
{
 int low=0;
 int high =n-1;

  while (low<=high)
  {
    int mid =  (high+low)/2;

  if(arr[mid]>-0)//the middle element is positive
    {
    high=mid-1;
    }
    else
    {
    if (arr[mid]+1<0 || mid ==n-1  )
    {



      return mid+2;
    }
    else
    {
        low=mid+1;
    }

    }
  }
  return 0;
}
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<count_negative(arr,n);
    return 0;
}

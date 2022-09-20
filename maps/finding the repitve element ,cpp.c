#include<iostream>
#include<map>
using namespace std;
int find_repeating(int arr[],int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(arr[i]=arr[j])
            {
                return i;
            }
        }
    }
}

int main ()
{
    int arr[];
    int n;
    cin>>n;
    for(int i =0;i<=n;i++)
    {
        cin>>arr[i]
    }
    cout<<find_repeating(arr,n)
    return 0;
}


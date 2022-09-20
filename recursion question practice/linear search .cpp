#include<iostream>
using namespace std;
bool linear_search(int *arr,int n,int key )
{
    if(n==0)
    {
        return false;

    }
    if(arr[0]==key)
    {
        return true;
    }
    else
    {
        bool remaining_part=linear_search(arr+1,n-1,key);
        return remaining_part;
    }
}
int main ()
{
    int arr[]={2,1,5,8};
    int n =4;
    int key=9;
    bool ans= linear_search(arr,n,key);
    if(ans)
    {
        cout<<"element found";

    }
    else
    {
        cout<<"element not found";
    }
    return 0;
}

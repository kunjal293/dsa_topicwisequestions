#include<iostream>
using namespace std;
int binary_search(int *arr,int s,int e,int key)
{
    if(s>e)
    {
        return -1;

    }

    int mid=(s+e)/2;
        if(arr[mid]==key)
    {
        return true;
    }
    if(arr[mid]<key)
    {
        return binary_search(arr,mid+1,e,key);
    }
    else
    {
        return binary_search(arr,s,mid-1,key);
    }
}
int main ()
{
    int arr[]={2,1,5,8};
    int s=0;
    int e=4;
    int key=9;
    bool ans= binary_search(arr,s,e,key);
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


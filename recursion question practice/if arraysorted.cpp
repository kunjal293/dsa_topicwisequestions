#include<iostream>
using namespace std;
bool isorted(int *arr,int n )
{
    if(n==0||n==1)
    {
        return true;
        cout<<"soted array";
    }

    if(arr[0]>arr[1])
    {
        return false;
    }
    else
    {
        bool remaining_part=isorted(arr+1,n-1);
        return remaining_part;

    }
}
int main ()
{
    int arr[5]={2,4,9,9,9};
    int n=5;
    bool ans=isorted(arr,n);
    if(ans)
    {
        cout<<"array is sorted"<<endl;
    }
    return 0;
}

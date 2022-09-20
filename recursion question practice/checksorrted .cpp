
#include<iostream>
using namespace std;
bool issoted(int *arr,int n)
{
    if(n==0||n==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else
    {
        int remaining_part=issoted(arr+1,n-1);
        return remaining_part;
    }
}
int main ()
{
    int arr[]={2,1,5,9};
    int n =4;
    bool ans =issoted(arr,n);
    if(ans)
    {
        cout<<"array is sorted";
    }
    else
    {
        cout<<"array is not sorted";
    }
    return 0;

}

#include<iostream>
using namespace std;
int linear_search(int arr[],int n ,int key)
{

    //base case
    if(n==0)
    {
        return 0;
    }
    if(n-1==key)
    {
        return n-1;
    }
    else
    {
        int remaining_part=linear_search(arr,n-1,key);
        return remaining_part;
    }
}
int main ()
{
    int arr[]={1,2,3,4,5,6};
    int n =sizeof(arr)/sizeof(int);
    int key ;
    cin>>key;
   int ans = linear_search(arr,n,key);
   if(ans)
   {
       cout<<"element found"<<endl;
   }

   else
   {
       cout<<"element not found"<<endl;
   }

    return 0;
}

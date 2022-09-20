#include<iostream>
using namespace std;
int main ()
{
    int arr[]={1,2,3,4};
    int n =sizeof(arr)/sizeof(int);
    int key ;
    cin>>key;
    for(int i =0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"number present at index "<<i<<endl;
        }


    }
 cout<<"number is not present"<<endl;


    return 0;
}

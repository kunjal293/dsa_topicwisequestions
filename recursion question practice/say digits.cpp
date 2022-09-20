#include<iostream>
using namespace std;
int saywords(int n ,string arr[] )
{
    if(n==0)
    {
        return 0;
    }
    int digit=n%10;
    n=n/10;
    cout<<arr[n]<<" ";
    //recursive call
    saywords(n,arr);
}
int main()
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n ;
    cin>>n;
    saywords(n,arr);
    return 0;
}

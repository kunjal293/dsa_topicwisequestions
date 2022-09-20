#include<iostream>
using namespace std;
int fibnum(int n )
{//base case
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    //recursive case
    else
    {
        int ans= fibnum(n-1)+fibnum(n-2);
        return ans;
    }
}
int main ()
{
    int n ;
    cin>>n;
    cout<<fibnum(n);
    return 0;
}

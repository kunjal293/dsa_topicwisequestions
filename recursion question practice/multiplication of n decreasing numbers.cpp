#include<iostream>
using namespace std;
int dec_multiply(int n)
{
    //base case
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n*(n-1);
    }
}
int main ()
{
    int n;
    cin>>n;
    cout<<dec_multiply(n)<<endl;
    return 0;
}

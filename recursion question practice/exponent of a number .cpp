#include<iostream>
using namespace std;
int exponenent_number(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
    //recursive case
    int ans=exponenent_number(a,b/2);
    //if b is even return a*a
    if(b%2==0)
    {
        return ans*ans;
    }
    //if b is odd
    else
    {
        return a*ans*ans;

    }
}
int main ()
{
    int a;
    int b ;
    cin>>a>>b;
    int ans=exponenent_number(a,b);
    cout<< ans ;
    return 0;
}

#include<iostream>
using namespace std;
int prime_number(int n)
{
    for(int i=0;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"not a prime number"<<endl;
        }
       cout<<"its a prime number!!"<<endl;
    }
}
int main ()
{
    int n;
    cin>>n;
    cout<<prime_number(n);
    return 0;
}

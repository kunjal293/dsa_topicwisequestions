#include<iostream>
using namespace std;
int fibo(int n)
{
    for(int i=0;i<=n;i++)
    {
    if(i==0||i==1)
    {
        return 1;
    }
    int a=fibo(n-1);
    int b= fibo(n-2);
    return a+b;
    }
}
int main ()
{
    int n;
    cin>>n;
    cout<<"fibonacci series: "<<fibo(n)<<endl;
    return 0;
}

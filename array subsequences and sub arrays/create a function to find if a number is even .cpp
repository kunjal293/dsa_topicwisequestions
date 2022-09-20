#include<iostream>
using namespace std;
int even_number(int n)
{
    if(n%2==0)
    {
        cout<<"even number"<<endl;
    }
    else
    {
        cout<<"odd number"<<endl;
    }
}
int main ()
{
    int n;
    cin>>n;
    even_number(n);
    return 0;
}

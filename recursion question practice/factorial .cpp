#include<iostream>
using namespace std;
int fact_number(int n )
{
    //base case
    if(n==0)
    {
        return 1;

    }
    //recursive case
    int a= fact_number(n-1);
    return n*a;
}
int main ()
{
    int n;
    cin>>n;

    cout<<"factorial for a number is: "<<fact_number(n)<<endl;
    return 0;
}

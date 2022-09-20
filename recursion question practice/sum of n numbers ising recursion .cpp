#include<iostream>
using namespace std;
int sum_numbers(int n)
{
    //base case
    if(n==1)
    {
        return 1;

    }
    else
    {


    //recursive case
   return sum_numbers(n-1)+n;
    }
}
int main ()
{
    int n;
    cin>>n;
    cout<<sum_numbers(n)<<endl;
    return 0;
}


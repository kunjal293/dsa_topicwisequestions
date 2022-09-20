#include<iostream>
#include<math.h>
using namespace std;
int  power_number(int a,int b)
{
    //base case
    if(b==0)
    {
        return 1;
    }
    else
    {
    //recursive case
    return  pow(a,b-1)*a;
    }
}


int main ()
{
    int a;
    int b;
    cin>>a>>b;
    cout<<power_number(a,b);
    return 0;
}

#include<iostream>
#include<math.h>
using namespace std;
int number_of_ways(int i,int j)
{
    //base case
    if(i==1||j==1)
    {
        return 1;
    }
    else
    {
        return number_of_ways(i,j-1)+ number_of_ways(j,i-1);
    }
}
int main ()
{
    int i;
    int j;
    cin>>i>>j;
    cout<<number_of_ways(i,j);
    return 0;
}

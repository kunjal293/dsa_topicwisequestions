#include<iostream>
using namespace std;
int climb_n_stairs(int n,int *a )
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {

        return a[0];
    }
    int remaining_part=climb_n_stairs(n-1,a+1);
    return remaining_part;
}
int main ()
{
    int a[]={1 ,2,3,5,6};
    int n ;
    cin>>n;
    cout<<climb_n_stairs(n,a);

    return 0;
}

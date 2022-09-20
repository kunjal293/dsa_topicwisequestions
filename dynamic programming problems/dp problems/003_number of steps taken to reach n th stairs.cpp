#include<iostream>
using namespace std;
int n_stairs(int n)
{
    if(n<=1)
    {
        return n;
    }

   return n_stairs(n-1)+n_stairs(n-2);

}
int count_ways(int s)
{
    n_stairs(s+1);
}
int main ()
{
    int s ;
    cin>>s;
    cout<<count_ways(s);

    return 0;
}

#include<iostream>
using namespace std;
void inc_num(int n)
{
    if(n==0)
    {
        return;
    }
    else
    {
        cout<<n<<" ";
        inc_num(n-1);
    }
}
void dec_num(int n)
{
    if(n==0)
    {
        return ;
    }
    else
    {
        dec_num(n-1);
        cout<<n<<" ";
    }
}
int main ()
{
    int n;
    cin>>n;
    dec_num(n);
    inc_num(n);
    return 0;
}

#include<iostream>
using namespace std;
int swap_numbers(int&a,int&b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}
int main ()
{
    int a,b;
    cin>>a>>b;
    cout<<"before swap"<<endl;
    cout<<"a:"<<a<<endl<<"B:"<<b<<endl;
    swap_numbers(a,b);
    cout<<"after swapping"<<endl;
    cout<<"a:"<<a<<endl<<"B:"<<b<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int multiply_numbers(int a,int b)
{
    return a*b;
}

int main ()
{
    int a,b;
    cin>>a>>b;
   cout<< multiply_numbers(a,b);
    return 0;
}

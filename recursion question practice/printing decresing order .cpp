#include<iostream>
using namespace std;
void decresing_numbers(int n)
{
    if(n==0)
    {
        return ;
    }
    //recursive case

    cout<<n<<endl;
   decresing_numbers(n-1);
}
int main ()
{
    int n;
    cin>>n;
  decresing_numbers( n);
    return 0;

}

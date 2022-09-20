#include<iostream>
#include<math.h>
using namespace std;
int fast_power(int a,int b)
{
    if(b=0)
    {
        return 1;

    }

    if(b%2==0)
        {
            return pow(a*a ,b/2);
        }
        if(b%2!=0)
        {
            return a* pow(a,b-1);
        }
    }

int main ()
{
    int a;
    int b;
    cin>>a>>b;
    cout<<"fast power is:"<<fast_power<<endl;
    return 0;
}

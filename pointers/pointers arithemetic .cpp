#include<iostream >
using namespace std;
int main ()
{
    int x=10;
    int *xptr=&x;
    cout<<xptr<<endl;//xptr returns the address of x variable bucket
    cout<<xptr+1<<endl;//xptr+1 will return add 1 to address of x bucket
    cout<<xptr+2<<endl;

    return 0;
}

#include<iostream>
using namespace std;
int main ()
{
    int a[]={10,20,30,40,50};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<=n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           cout << "{" << a[i] << ", " << a[j] << "}" << endl;
        }
    }

}

#include<iostream >
using namespace std;
int sumofarray(int a[],int n)
{
    int sum =0;
    for(int i=0;i<=n;i++)
    {
      sum=sum+a[i];
    }
    a[0] = 100;
    return sum;

}





int main ()
{
    int a[100]={1, 2, 3, 4, 5};
    int n =sizeof(a)/sizeof(int);
    cout<<"before sum of array: "<<a[0]<<endl;
    sumofarray(a, n);
    cout<<"after sum of array: "<<a[0]<<endl;

    return 0;
}

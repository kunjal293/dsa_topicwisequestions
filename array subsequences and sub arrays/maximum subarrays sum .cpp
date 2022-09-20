#include<iostream>
using namespace std;
int main()
{
    int a[100]={1,2,3,4,5};
    int n =sizeof(a)/sizeof(int);
    int mss=INT_MIN;
    for(int i =0;i<=n;i++)
    {
        for(int j=1;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum =sum+a[k];
            }
            if(sum>mss)
            {
                mss=sum;
            }
        }
    }
cout<<"maximum sub array sum : " <<mss<<endl;
return 0;
}


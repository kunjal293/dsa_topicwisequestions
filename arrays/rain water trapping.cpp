#include<iostream>
using namespace std;
int main ()
{
    int h[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2};
    int n =sizeof(h)/sizeof (int);

    int lh[100];
    int rh[100];
    lh[0] = h[0];
    for(int i=0;i<=n;i++)
    {
        lh[i]=max(h[i],lh[i-1]);

    }
    for(int i=n;i>=0;i++)
    {
        rh[i]=max(h[i],rh[i+1]);
    }
    int total =0;
    for(int i=0; i<n; i++)
    {

        total =min(lh[i],rh[i])-h[i];

    }
    cout<<total<<endl;


    return 0;

}

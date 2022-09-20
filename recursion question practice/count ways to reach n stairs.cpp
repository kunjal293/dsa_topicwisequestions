#include<iostream>
using namespace std;
int fun(int nstairs)
{
    if(nstairs<0)
    {

        return 0;
    }
        if(nstairs==0)
        {
            return 1;
        }
        else
        {
            int ans =fun(nstairs-1)+fun(nstairs-2);
            return ans;
        }
}
int main()
{
    int nstairs;
    cout<<"enter number of stairs"<<endl;
    cin>>nstairs;
    cout<<fun(nstairs);

    return 0;
}

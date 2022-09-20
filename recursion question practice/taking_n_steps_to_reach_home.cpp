#include<iostream>
using namespace std;
int reach_home(int src,int destination)
{
    if(src==destination)
    {
        cout<<"person reached home";
        return 0;
    }
    else
    {
        src++;
        reach_home(src,destination);

    }
}
int main ()
{
    int src;
    int destination;
    cin>>src;
    cin>>destination;
    reach_home(src,destination);
    return 0;
}

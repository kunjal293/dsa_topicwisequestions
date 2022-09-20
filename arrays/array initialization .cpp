#include<iostream>
using namespace std;
void print_2darray(int a[][4],int m,int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int B[] = {1, 2, 3};

	int a[][4] = {{10, 20, 30, 40},
                   {50},
                   {90, 100}};

    int m = 3; // num. of rows
    int n = 4;

    print_2darray(a ,m,n);
    return 0;
}

#include <iostream>
using namespace std;




int minimumCost( int n , int arr[]){
    if(n == 0)
    {
        return arr[0] ;
}
    if(n == 1)
    {
        return arr[1] ;
        }

     int top = min( minimumCost(n-1,arr) + arr[n] ,   minimumCost(n-2, arr)+ arr[n] );

}


int main()
{
    int arr[] = { 16, 19, 10, 12, 18 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << minimumCost(n-2, arr);
    return 0;
}


#include <iostream>
using namespace std;


void print_array(int arr[], int size)
{

 int i;

    // base case
    if (i == size) {
        i = 0;
        cout << endl;
        return;
    }

    // print the ith element
    cout << arr[i] << " ";
    i++;

    // recursive call
    print_array(arr, size);
}

int main()
{

    int arr[] = { 3, 5, 6, 8, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, n);

    return 0;
}

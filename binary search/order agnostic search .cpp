#include <iostream>
using namespace std;


int binarySearch(int arr[], int start,int end, int x)
{
    bool isAsc = arr[start] < arr[end];
    if (end >= start) {
        int middle = (start + end )/ 2;


        if (arr[middle] == x)
            return middle;

        if (isAsc == true) {

            // If element is smaller than mid,
            // then it can only be
            // present in left subarray
            if (arr[middle] > x)
                return binarySearch(
                    arr, start,
                    middle - 1, x);

            // Else the element can only be present
            // in right subarray
            return binarySearch(arr, middle + 1,
                                end, x);
        }
        else {
            if (arr[middle] < x)
                return binarySearch(arr, start,middle - 1, x);

            // Else the element can only be present
            // in left subarray
            return binarySearch(arr, middle + 1,
                                end, x);
        }
    }


    return -1;
}

int main(void)
{
    int arr[] = { 40, 10, 5, 2, 1 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearch(arr, 0, n - 1, x);

    return 0;
}

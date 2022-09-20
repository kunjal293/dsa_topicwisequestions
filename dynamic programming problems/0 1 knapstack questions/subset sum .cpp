//subset is a continuous part of array
//subset ques are either array or string

//input : array []=2  3 7 8 10
         //sum =11
//output :"true" or "false"

//bool data type is needed
#include <iostream>

using namespace std;

//It will return true if subset of set[]

//has sum equal to given sum; false otherwise

bool is_subset_sum(int set[], int n, int sum)

{

// Base Cases

if (sum == 0)

return true;

if (n == 0)

return false;

// If last element is greater than sum,

// then we will ignore it

if (set[n - 1] > sum)

return is_subset_sum(set, n - 1, sum);

/* otherwise,we will check if the sum can be obtained by any

of the following:

(a) including the last element

(b) excluding the last element */

return is_subset_sum(set, n - 1, sum)  || is_subset_sum(set, n - 1, sum - set[n - 1]);

}

// Driver code

int main()

{

int set[] = { 10, 7, 8, 9, 1, 5 };

int sum = 16;

int n = sizeof(set) / sizeof(set[0]);

if (is_subset_sum(set, n, sum) == true)

cout <<"Found a subset with given sum";

else

cout <<"No subset with given sum was found";

return 0;

}

// https://www.interviewbit.com/problems/rotated-array/

/**


Asked in:  
Facebook
Suppose a sorted array A is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

Find the minimum element.

The array will not contain duplicates.

NOTE 1: Also think about the case when there are duplicates. Does your current solution work? How does the time complexity change?*
Ans : think of the case 5 5 5 1 5 5 5 we won't be able to tell in which potion 1 exists, hence we will have to use linear search.
PROBLEM APPROACH:

Note: If you know the number of times the array is rotated, then this problem becomes trivial. If the number of rotation is x, then minimum element is A[x].
Lets look at how we can calculate the number of times the array is rotated.

**/

// CODE

int Solution::findMin(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l = 0, r= A.size()-1, index = 0;
    int n = A.size();
    while(l<=r){
        int mid = l + (r-l)/2;
        if(A[mid] > A[index]) {
            l = mid+1;
        }
        else {
            index = mid;
            r = mid -1;
        }
    }
    return A[index];
}

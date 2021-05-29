// https://www.interviewbit.com/problems/search-for-a-range/

/**

Search for a Range
Asked in:  
Google
Microsoft
Given a sorted array of integers A(0 based index) of size N, find the starting and ending position of a given integar B in array A.

Your algorithm’s runtime complexity must be in the order of O(log n).

Return an array of size 2, such that first element = starting position of B in A and second element = ending position of B in A, if B is not found in A return [-1, -1].



Input Format

The first argument given is the integer array A.
The second argument given is the integer B.
Output Format

 Return an array of size 2, such that first element = starting position of B in A and second element = ending position of B in A, if B is not found in A return [-1, -1].
Constraints

1 <= N <= 10^6
1 <= A[i], B <= 10^9
For Example

Input 1:
    A = [5, 7, 7, 8, 8, 10]
    B = 8
Output 1:
    [3, 4]
Explanation 1:
    First occurence of 8 in A is at index 3
    Second occurence of 8 in A is at index 4
    ans = [3, 4]

Input 2:
    A = [5, 17, 100, 111]
    B = 3
Output 2:
    [-1, -1]
    
    **/

// CODE
int binarysearch(const vector<int> &arr, int key, bool LeftmostVal){
    int l = 0, r = arr.size()-1;
    while(l<=r) {
        int mid = l + (r-l)/2;
        if(arr[mid] == key) {
            if(LeftmostVal) {
                r = mid -1; 
            }
            else {
                l = mid + 1;
            }
        }
        else if(arr[mid] > key) r = mid-1;
        else l = mid+1;
    }
    return (LeftmostVal) ? l : r;
}

vector<int> Solution::searchRange(const vector<int> &A, int B) {
    vector<int> range = {-1, -1};
    int left = binarysearch(A, B, true);
    if(A[left] == B) range[0] = left;

    int right = binarysearch(A, B, false);
    if(A[right] == B) range[1] = right;
    return range;
}

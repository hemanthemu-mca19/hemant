// https://www.interviewbit.com/problems/count-element-occurence/

/**
Count Element Occurence
Given a sorted array of integers, find the number of occurrences of a given target value.
Your algorithm’s runtime complexity must be in the order of O(log n).
If the target is not found in the array, return 0

**Example : **
Given [5, 7, 7, 8, 8, 10] and target value 8,
return 2.

**/

// CODE

int binarysearch(vector<int> A, int n, int k, bool first){
        int index = -1;
        int low = 0, high = n-1;
        while(low <= high){
        int mid = low + (high-low)/2;
        if(A[mid] == k){
            index = mid;
            if(first) {
                // finding 1st occourance
                high = mid -1;
            }
            else {
                // finding last occourance
                low = mid +1;
            }
        }
        else if(A[mid] > k){
            high = mid-1;
        }
        else low = mid+1;
        }
        return index;
    }

int Solution::findCount(const vector<int> &A, int B) {
    
    int l = binarysearch(A, A.size(), B, true);
    if(l == -1) return 0;
    int r = binarysearch(A, A.size(), B, false);
    return (r-l+1);
}


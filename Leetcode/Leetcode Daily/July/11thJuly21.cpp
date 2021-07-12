// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/609/week-2-july-8th-july-14th/3810/

/**
Find Median from Data Stream

Solution
The median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value and the median is the mean of the two middle values.

For example, for arr = [2,3,4], the median is 3.
For example, for arr = [2,3], the median is (2 + 3) / 2 = 2.5.
Implement the MedianFinder class:

MedianFinder() initializes the MedianFinder object.
void addNum(int num) adds the integer num from the data stream to the data structure.
double findMedian() returns the median of all elements so far. Answers within 10-5 of the actual answer will be accepted.
 

Example 1:

Input
["MedianFinder", "addNum", "addNum", "findMedian", "addNum", "findMedian"]
[[], [1], [2], [], [3], []]
Output
[null, null, null, 1.5, null, 2.0]

Explanation
MedianFinder medianFinder = new MedianFinder();
medianFinder.addNum(1);    // arr = [1]
medianFinder.addNum(2);    // arr = [1, 2]
medianFinder.findMedian(); // return 1.5 (i.e., (1 + 2) / 2)
medianFinder.addNum(3);    // arr[1, 2, 3]
medianFinder.findMedian(); // return 2.0
 

Constraints:

-105 <= num <= 105
There will be at least one element in the data structure before calling findMedian.
At most 5 * 104 calls will be made to addNum and findMedian.
 

Follow up:

If all integer numbers from the stream are in the range [0, 100], how would you optimize your solution?
If 99% of all integer numbers from the stream are in the range [0, 100], how would you optimize your solution?
**/

//CODE
class MedianFinder {
public:
    /** initialize your data structure here. */
    
    priority_queue<int, vector<int>, greater<int> > pq1;
    priority_queue<int> pq2;
    double median = 0;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(pq1.empty() || num >= pq1.top()) pq1.push(num);
        else pq2.push(num);
        //balacing to have difference of size not more than 1
        if(pq1.size() > pq2.size()+1) {
            int curr = pq1.top();
            pq2.push(curr);
            pq1.pop();
        }
        else if(pq2.size() > pq1.size()+1) {
            int curr = pq2.top();
            pq1.push(curr);
            pq2.pop();
        }
    }
    
    double findMedian() {
        if(pq1.size() > pq2.size()) return pq1.top();
        else if(pq2.size() > pq1.size()) return pq2.top();
        else return (pq1.top()+pq2.top())/2.0;
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */

class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        priority_queue<int> pq;
        int total_time=0;
        sort(courses.begin(), courses.end(), [](auto &a, auto &b) {return a[1] < b[1];});

        for(int i=0; i<courses.size(); i++) {
            if( (total_time+courses[i][0]) <= courses[i][1]){
                pq.push(courses[i][0]);
                total_time += courses[i][0];
            }
            else if(pq.size() && courses[i][0]<pq.top()){
                int m = pq.top();
                pq.pop();
                pq.push(courses[i][0]);
                total_time = total_time - m + courses[i][0];    
            }
        }
        return pq.size();
    }
};

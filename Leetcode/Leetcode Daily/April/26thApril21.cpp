class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int i=0;
        priority_queue<int> p;
        for(i=0; i<heights.size()-1; i++) {
            if(heights[i+1] <= heights[i]) continue;
            int diff = heights[i+1] - heights[i];
            if(diff <= bricks){
                bricks -= diff;
                p.push(diff);
            }
            else if(ladders > 0){
                if(p.size()){
                   int root = p.top();
                    if(root > diff){
                        bricks += root;
                        bricks -= diff;
                        p.pop();
                        p.push(diff);
                    }
                }
                ladders--;
            }
           else break;  
        }
        return i;
    }
};

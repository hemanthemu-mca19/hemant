int solve(vector<int>& cells) {
    if(cells.size()==0) return -1;
    if(cells.size()==1) return cells[0];
    priority_queue<int> pq;
    for(int i=0; i<cells.size(); i++) {
        pq.push(cells[i]);
    }
    int temp = 0;

    while(pq.size() >1) {
        temp = pq.top();
        //cout << temp;
        pq.pop();
        
        if(pq.top() != temp) {
            //cout<<pq.top();
            temp += pq.top();
            temp /=3;
            pq.pop();
            pq.push(temp);
        }
        else pq.pop();
    // cout<< pq.top()<<", ";
    }
    if(pq.size()==0) return -1;
    return pq.top();
    //return -1;
}

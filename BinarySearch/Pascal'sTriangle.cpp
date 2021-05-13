/** https://binarysearch.com/problems/Pascal's-Triangle **/
//Recursive Approach
vector<int> getRow(int n){
    vector<int> curr;
    curr.push_back(1);
    if(n==0) return curr;

    vector<int> prev = getRow(n-1);

    for(int i=1; i<prev.size(); i++){
        curr.push_back(prev[i-1]+prev[i]);
    }
    curr.push_back(1);
    return curr;
}

vector<int> solve(int n) {
    vector<int> p = getRow(n);
    return p;
}

//Iterative Approach
vector<int> solve(int n) {
    vector<int> temp;
    temp.push_back(1);
    while (n--) {
        cout<<temp.size()<<" ";
        for (int i = temp.size() - 1; i > 0; i--) temp[i] += temp[i - 1];
        temp.push_back(1);
    }
    return temp;
}

vector<int> solve(vector<int>& a, vector<int>& b) {
    if(a.size() == 0) return b;
    if(b.size() == 0) return a;
    int i=0, j=0;
    vector<int> res;
    while(i<a.size() && j<b.size()) {
        if(a[i] <= b[j]) res.push_back(a[i++]);
        else res.push_back(b[j++]);
    }
    while(i<a.size()) {
       res.push_back(a[i++]); 
    }
    while(j<b.size()) {
       res.push_back(b[j++]); 
    }
    return res;
}

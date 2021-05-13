/** https://binarysearch.com/problems/Validate-Delivery-Orders **/

bool solve(vector<string>& orders) {
    int n = orders.size();
    if(n<2 || n%2 !=0) return false;
    unordered_map<string, int> mp;
    for(int i=0; i<n; i++){
        if(orders[i][0] == 'P') {
            if(mp.find(orders[i].substr(1)) == mp.end()) mp[orders[i].substr(1)]++;
            else return false;
        }
        else {
            if(mp.find(orders[i].substr(1)) != mp.end() and mp[orders[i].substr(1)] != 0) mp[orders[i].substr(1)]--;
            else return false;
        }
    }
    for(auto x : mp) if(x.second != 0) return false;
    return true;
}

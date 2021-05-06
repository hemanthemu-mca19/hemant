int solve(vector<vector<int>>& reviews, int threshold) {
    int five=0, total=0;
    for(int i=0; i<reviews.size(); i++){
        five += reviews[i][0];
        total += reviews[i][1];
    }
    if( (five*100/total) >=threshold) return 0;
    int cnt=0;
    while(five*100/total <threshold){
        cnt++;
        five +=1;
        total +=1;
    }
    return cnt;
}

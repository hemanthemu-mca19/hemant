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

//Optimized
int solve(vector<vector<int>>& reviews, int t) {
    int n = reviews.size();
    int st5 = 0, trev = 0;
    for (auto& v : reviews) {
        st5 += v[0];
        trev += v[1];
    }
    if (t == 100 & st5 == trev) return 0;
    double x = ((double)st5 * 100 - (double)trev * t) / ((double)t - 100);
    return (ceil(x) < 0) ? (0) : (ceil(x));
}

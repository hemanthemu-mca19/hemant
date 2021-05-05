vector<string> solve(int n) {
    vector<string> fb;
    for(int i=1; i<=n; i++) {
        if(i%3==0 and i%5==0) fb.push_back("FizzBuzz");
        else if(i%3==0) fb.push_back("Fizz");
        else if(i%5==0) fb.push_back("Buzz");
        else {
            string s;
            s = to_string(i);
            fb.push_back(s);
        }
    }
    return fb;
}

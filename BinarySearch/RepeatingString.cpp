bool solve(string s) {
    vector<int> lps = {0}; 
        int k = 0; 
        for (int i = 1; i < s.size(); ++i) {
            while (k && s[k] != s[i]) k = lps[k-1]; 
            if (s[k] == s[i]) ++k; 
            lps.push_back(k); 
        }
        return lps.back() && s.size() % (s.size() - lps.back()) == 0; 
}

// https://binarysearch.com/problems/Rotation-Groups

/**

Rotation Groups
A rotation group for a string contains all of its unique rotations. For example, "123" can be rotated to "231" and "312" and they are all in the same rotation group.

Given a list of strings words, group each word by their rotation group, and return the total number of groups.

Constraints

n ≤ 200 where n is the length of words.
Example 1
Input
words = ["abc", "xy", "yx", "z", "bca"]
Output
3
Explanation
There are three rotation groups:

["abc", "bca"]
["xy", "yx"]
["z"]

**/

// CODE

bool helper(vector<string> &words, string check, string word){
    for(int k=0; k<check.size()-word.size(); k++){
        string sub = check.substr(k, word.size() );
        // cout<<sub <<" "<<word <<endl;
        if(sub == word) return true;
    }
    return false;
}


int solve(vector<string>& words) {
    
    for(int i=0; i<words.size(); i++){
        if(words[i]== "-1") continue;
        string check = words[i]+words[i];
        for(int j = i+1; j<words.size(); j++){
            if(words[j] == "-1") continue;
            // cout<<words[i] << " " << words[j]<<endl;
            if(words[i].size() == words[j].size()) {
                bool val = helper(words, check, words[j]);
                if(val) words[j] = "-1";
            }
        }
    }
    int cnt = 0;
    for(auto x : words) {
        // cout<<x<<" ";
        if(x != "-1") cnt++;
    }
    return cnt;
}

// solution using set

int solve(vector<string>& words) {
    unordered_set<string> vis;

    for (string& s : words) {
        for (int i = 0; i < s.size(); i++) {
            rotate(s.begin(), s.begin() + 1, s.end());
            if (vis.count(s)) break;
        }
        vis.insert(s);
    }

    return vis.size();
}

vector<string> solve(vector<string>& path) {
    int n = path.size();
    stack<string> st;
    for (int i = 0; i < n; i++) {
        if (path[i] == ".")
            continue;
        else if (path[i] == "..") {
            if (!st.empty()) st.pop();
        } else
            st.push(path[i]);
    }
    int size = st.size();
    path.clear();
    path.resize(size);
    for (int i = size - 1; i >= 0; i--) {
        path[i] = st.top(), st.pop();
    }
    return path;
}

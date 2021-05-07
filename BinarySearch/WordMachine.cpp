int solve(vector<string>& ops) {
    stack<int> st;
    int temp1, temp2;
    for(int i=0; i<ops.size(); i++){
        temp1 =0; temp2=0;
        if(ops[i] == "POP") {
            if(st.size()>0) st.pop();
            else return -1;
        }
        else if(ops[i] == "DUP") {
            if(st.size()==0) return -1;
            else {
                temp1 = st.top();
                st.push(temp1);
            }
        }
        else if(ops[i] == "+") {
            if(st.size()>1) {
                temp1 = 0;
                temp1 = st.top();
                st.pop();
                temp2 = 0;
                temp2 = st.top();
                st.pop();
                st.push(temp1+temp2);
            }
            else return -1;
        }
         else if(ops[i] == "-") {
            if(st.size()>1) {
                temp1 = 0;
                temp1 = st.top();
                st.pop();
                temp2 = 0;
                temp2 = st.top();
                st.pop();
                st.push(temp1-temp2);
            }
            else return -1;
        }
        else {
            temp1 = 0;
            stringstream s(ops[i]);
            s >> temp1;
            st.push(temp1);
        }
        //cout<< st.top() << endl;
    }
    if(!st.empty()) {
        temp1 = 0;
        temp1 = st.top();
        return temp1;
    }
    return -1;
}

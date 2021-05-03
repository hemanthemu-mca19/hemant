class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        int i=0;
        while(i<address.length()){
            if(address[i] != '.')
                s.push_back(address[i]);
            else {
                s.push_back('[');
                s.push_back('.');
                s.push_back(']');
            }
            i++;
        }
        return s;
    }
};

// https://www.interviewbit.com/problems/valid-ip-addresses/

/**
Valid Ip Addresses
Asked in:  
Amazon
Given a string containing only digits, restore it by returning all possible valid IP address combinations.

A valid IP address must be in the form of A.B.C.D, where A,B,C and D are numbers from 0-255. The numbers cannot be 0 prefixed unless they are 0.

Example:

Given “25525511135”,

return [“255.255.11.135”, “255.255.111.35”]. (Make sure the returned strings are sorted in order)

**/

// CODE

bool valid(string ip_section){
    if(ip_section.size()>3) return false;
    if(ip_section[0]=='0' and ip_section.size()>1) return false;
    long long int no = stoll(ip_section);
    return no>=0 and no<=255;
}

vector<string> Solution::restoreIpAddresses(string A) {
    vector<string> IPs;
    
    string first, second, third, fourth;
    
    for( int i=1; i<=3 and i<A.size(); i++){
        first = A.substr(0,i);
        if(valid(first)){
            for(int j=1;j <= 3 and j+i < A.size(); j++){
                second = A.substr(i,j);
                if(valid(second)){
                    for(int k=1; k <= 3 and k+j+i<A.size(); k++){
                        third = A.substr(i+j, k);
                        fourth = A.substr(i+j+k);
                        if(valid(third) and valid(fourth)){
                            IPs.push_back(first+"."+second+"."+third+"."+fourth);
                        }
                    } 
                }
            }
        }
    }
    return IPs;
}

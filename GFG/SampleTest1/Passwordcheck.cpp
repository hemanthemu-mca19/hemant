#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>> t;
	while(t--) {
	    string pass;
	    cin>> pass;
	    bool lower_alpha = false, upper_alpha = false, digit = false;
	    for(int i=0; i<pass.size(); i++) {
	        if(pass[i]-'0' < 10) digit = true;
	        else if(pass[i]-'A' < 26) upper_alpha = true;
	        else if(pass[i]-'a' < 26) lower_alpha = true;
	        
	    }
	    if(lower_alpha and upper_alpha and digit) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}

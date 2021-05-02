bool solve(string typed, string target) {
    int i=0, j=0, n1 = typed.size(), n2 = target.size();
    if((n1==0 and n2!=0) || (n1!=0 and n2==0)) return false;
    if(typed == target) return true;

        while(i<n1 and j<n2){
            if(typed[i] == target[j]) {
                i++, j++;
            }
            else if(typed[i] == typed[i-1]) i++;
            else{
                return false;
                break;
            }
        }
        if(j!=n2) return false;
        while(i<n1) {
            if(i<n1 and typed[i] != typed[i-1]) return false;
            else i++;
        }
    return true;
}

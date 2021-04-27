class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix[0].size();
        cout<<n<<endl;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for(int i=0; i<n; i++){
            int j=0, k=n-1;
           while(j<k){
               int temp = matrix[i][j];
               matrix[i][j] = matrix[i][k];
               matrix[i][k] = temp;
               j++;
               k--;
           }
        }
    }
};

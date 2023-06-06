
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
	int m = matrix[0].size();
	// Write your code here.
	vector<int> Cv(m,1),Rv(n,1);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == 0){
				Rv[i] = 0;
				Cv[j] = 0;
			}
		}
	}
	for(int i=0;i<n;i++){
          for (int j = 0; j < m; j++) {
            matrix[i][j] *= Cv[j] * Rv[i];
          }
        }
    }
};
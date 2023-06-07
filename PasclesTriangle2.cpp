class Solution {
public:
//vector<vector<long long>> PT(numRows);
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> PT(numRows);
  PT[0].push_back(1);
  long long nxt { 2 };
  for(long long i=1;i<numRows;i++){
    for(long long j=0;j<nxt;j++){
      long long temp = (j-1 >= 0)?PT[i-1][j-1]:0; //Dont forget type conversion
      
      temp += (j < nxt-1)?PT[i-1][j]:0;
    
      PT[i].push_back(temp);
    }
    
    nxt++;
  }
  return PT;
    }
};
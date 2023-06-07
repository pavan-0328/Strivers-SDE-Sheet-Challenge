#include <bits/stdc++.h>
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long>> PT(n);
  PT[0].push_back(1);
  long long nxt { 2 };
  for(long long i=1;i<n;i++){
    for(long long j=0;j<nxt;j++){
      long long temp = (int)((j-1 >= 0)?1:0) * PT[i-1][j-1]; //Dont forget type conversion
      
      temp += (int)((j < nxt-1)?1:0) *PT[i-1][j];
    
      PT[i].push_back(temp);
    }
    
    nxt++;
  }
  return PT;
}

int main(){

    vector<vector<long long>> arr;
    for(int k=5;k>3;k--){
    arr = printPascal(k);

    for(auto i: arr){
        for(auto j: i){
            cout << j << " ";
        }cout << endl;
    }}
    return 0;
}
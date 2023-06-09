class Solution {
public:

int find_nxtbig(vector<int> &arr, int from){
  int idx = arr.size()-1; // if from element itself is smaller than the rest of arrray elements to its right.
  for(int i=from+1;i<arr.size();i++){
      if(arr[from]>=arr[i]){
          idx = i-1;
          break;
      }
  }
  return idx;
}
    void nextPermutation(vector<int>& arr) {
        
        int n=arr.size();
    for(int i=n-1;i>0;i--){
        if(arr[i] > arr[i-1]){
            int nxtbig_indx = find_nxtbig(arr, i-1);
            swap(arr[nxtbig_indx],arr[i-1]);
            reverse(arr.begin() + i,arr.end());
            return;
        }
    }
    sort(arr.begin(),arr.end());
    }
};
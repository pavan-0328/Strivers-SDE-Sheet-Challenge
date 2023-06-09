#include <bits/stdc++.h> 

int find_nxtbig(vector<int> &arr, int from){
  int idx = arr.size()-1; // if from element itself is smaller than the rest of arrray elements to its right.
  for(int i=from+1;i<arr.size();i++){
      if(arr[from]>=arr[i]){ //what if all the elements are equal 
          idx = i-1;
          break;
      }
  }
  return idx;
}
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    vector<int> arr = permutation;
    for(int i=n-1;i>0;i--){
        if(arr[i] > arr[i-1]){ //if current element is > its prev element 
            int nxtbig_indx = find_nxtbig(arr, i-1); // find the biggest element that is just grater that the prev element
            swap(arr[nxtbig_indx],arr[i-1]);//swap those two elements
            reverse(arr.begin() + i,arr.end());//reverse the array from current indx to till the end
            return arr;
        }
    }
    sort(arr.begin(),arr.end()); // if the array is strictly decricing from left to right sort the array in increasing order form left to right
    return arr;

}

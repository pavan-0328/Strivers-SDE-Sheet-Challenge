#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   /*
   O(nlog(n))
   sort(arr,arr+n);
   */
   /*
   //O(n + n)
   int cnt_arr[3] = {0,0,0};
   for(int i=0;i<n;i++){
      cnt_arr[arr[i]]++;
   }
   int x = 0;
   for(int i=0;i<3;i++){
      while(cnt_arr[i]--){
         arr[x] = i;
         x++;
      }
   }
   */
   /*
   int z{0}, o { 0 };
   for(int i=0;i<n;i++){
      if(arr[i] == 0){
         swap(arr[i],arr[z]);
         z++;o++;
      }
      else if(arr[i]==1){
         swap(arr[i],arr[o]);
         o++;
      }
   }
   */
   
   //Dutch Man Flag algo
   int lo{0}, mid{0}, hi { n - 1 };

   while(mid <= hi){
      if(arr[mid]==0){
         swap(arr[mid],arr[lo]);
         lo+=1;mid+=1;
      }else if(arr[mid]==1){
         mid+=1;
      }else{
         swap(arr[mid],arr[hi]);
         hi--;
      }
   }
   
}
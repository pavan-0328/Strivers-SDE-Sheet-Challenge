#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    /*
    long long max_sum { 0 };
    for(int i=1;i<n;i++){
        if(arr[i] > 0){
            arr[i]+=arr[i-1];

        }else
        {
            arr[i] = 0;
        }
    }
    max_sum = *max_element(arr,arr+n);
    return max_sum;
    */

    /*
    long long max_sum { 0 };
    for(int i=1;i<n;i++){
        if(arr[i] + arr[i-1]>= 0){
            arr[i]+=arr[i-1];

        }else
        {
            arr[i] = 0;
        }
    }
    max_sum = *max_element(arr,arr+n);
    return max_sum;
    */

    //As we are considering sum of empty sub array is 0
    long long max_element { 0 },current_max{0};
    for(int i=0;i<n;i++){
        current_max+=arr[i];
        max_element = max(current_max,max_element);
        current_max = max(current_max,(long long)0);
    }
    return max_element;

/*
 //sum of empty subarray != 0 leetcode sol
long long max_element {LLONG_MIN},current_max{0};
    for(int i=0;i<n;i++){
        current_max+=arr[i];
        max_element = max(current_max,max_element);
        current_max = max(current_max,(long long)0);
    }
    return max_element;
    */
}

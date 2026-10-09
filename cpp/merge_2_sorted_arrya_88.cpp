#include <bits/stdc++.h>
 class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int k=0;
        vector<int>temp(m+n); // always define size of the vector  to tackle runtime error 
                              // last indices 0s are ignored autoatically
        while(i<m && j<n){
            if(nums1[i]>=nums2[j]){
               temp[k]=nums2[j];
               j++;
               k++;
            }
            else if(nums1[i]<=nums2[j]){
                temp[k]=nums1[i];
                i++;
                k++;
            }
        }
        // Remaining elements of nums1
        // (remaining elements when either of the array is exhausted)
        while(i < m) {
            temp[k] = nums1[i];
            i++;
            k++;
        }

        // Remaining elements of nums2
        // (remaining elements when either of the array is exhausted)
        while(j < n) {
            temp[k] = nums2[j];
            j++;
            k++;
        }

        int s= temp.size();
        for(int p=0;p<s;p++){
            nums1[p]=temp[p];
        }
    }
};
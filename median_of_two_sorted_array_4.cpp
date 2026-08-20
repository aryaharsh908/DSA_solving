class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        nums1.resize(m+n);

        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j]){
               nums1[k]=nums1[i];
               i--;
               k--;
            }
            else if(nums1[i]<=nums2[j]){
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        // Remaining elements of nums1
        while(i >= 0) {
            nums1[k] = nums1[i];
            i--;
            k--;
        }

        // Remaining elements of nums2
        while(j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }// this was done to first merger the two sorted array so that latwer on can find the median of the merged array
        m=nums1.size();
        if(m==1){
            return nums1[0];
        }
        if(m%2==0){
            double p=(nums1[m/2]+nums1[(m/2)-1])/2.0;
            return p;
        }
        else {
        double q =nums1[m/2];
        return q;
        }
    }
};
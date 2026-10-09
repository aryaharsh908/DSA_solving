class Solution {
public:
    bool check(vector<int>& nums) {
       int n=nums.size();
       int p=0;
        if(n==1)
        return true;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                 p++;
            }
            if(p>1||(p==1 && nums[0]<nums[n-1])){
                return false;
            }
        }
        return true;
    }



};   // my solution. otherwise u can do it using binary search

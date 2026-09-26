#include <bits/stdc++.h>
using namespace std;
class Solution { // not optimal solution but works fine
public:
    void rotate(vector<int>& nums, int k) {
    int n= nums.size();
    if(k>n)  //so that when rotating index is greater than the size of the array we can rotate it to the same index as k%n
    k=k%n;
    if(k>0){
    int temp[k];
    for(int i=0;i<k;i++){ //storing the last k elements in a temporary array
        temp[i]=nums[n-k+i];
    }
    for(int i=n-k-1;i>=0;i--){ //shifting the elements of the array to the right by k positions
        nums[i+k]=nums[i];
    }
    for(int i=0;i<k;i++){//copying the elements from the temporary array to the first k positions of the original array
        nums[i]=temp[i];
    }
    }
    }
};
int main() {
  Solution sol;
  vector<int> nums = {1,2,3,4,5,6,7};
  sol.rotate(nums, 3);
  for(int i=0;i<nums.size();i++){
      cout<<nums[i]<<" ";
  }
    return 0;
}

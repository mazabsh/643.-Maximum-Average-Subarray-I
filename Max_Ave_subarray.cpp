#include<iostream> 
#include<vector> 
#include<algorithm> 

using namespace std; 

class Solution{
public: 
      double maxAve(vector<int>& nums, int k){
        int m = nums.size(); 
        int sum =0; 
        int maxSum =0; 
        for(int i=0; i<k; ++i){
          sum += nums[i]; 
        }
        maxSum = sum; 
        for(int i=k; i<m; ++i){
          sum = sum-nums[i-k]+nums[i]; 
          maxSum = max(sum, maxSum); 
        }
        return maxSum / double(k); 
      }
};
int main(){
  vector<int> nums = {1,12,-5,-6,50,3}; 
  int k=4; 
  Solution sol; 
  cout << sol.maxAve(nums, k) << endl; 
  return 0; 
}

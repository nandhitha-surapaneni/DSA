// Remove duplicates from sorted array

class Solution{
public: 
    int duplicates(vector<int>& nums){
      for (int i = 0; i < nums.size() - 1 ; i++){
        if (nums[i] == nums[i+1]){
            nums.erase(nums.begin() + i);
            i--;
        }
       }
       return nums.size();
    }
};
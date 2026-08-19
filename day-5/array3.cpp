// Check if array is sorted

class Solution{
public: 
    bool isSorted(vector<int>& nums){
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > nums[i+1]){
                return false;
            }
        }
        return true; 
    }   
};
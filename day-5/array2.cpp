// Second largest element in an array

class Solution {
public: 
    int secondLargestElement(vector<int>& nums){
        int Largest = INT_MIN;
        int secondLargest = INT_MIN;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > Largest){
                secondLargest = Largest;
                Largest = nums[i];
            }
            else if (nums[i] > secondLargest && nums[i] != Largest){
                secondLargest = nums[i];
            }
        }
        return secondLargest; 
    }
};
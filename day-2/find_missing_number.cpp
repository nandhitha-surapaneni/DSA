#include<iostream>
#include<vector>
using namespace std;    

class Solution{
public: 
    int findMissingNumber(vector<int>& nums){
        int n = nums.size();
        int totalSum = n * (n + 1) / 2; // Sum of first n natural numbers
        int arraySum = 0;
        for(int i=0; i<n; i++){
            arraySum += nums[i];
        }
        return totalSum - arraySum; // The missing number
    }
};

int main(){
    Solution obj;
    vector<int> nums = {0, 1, 2, 3, 4, 6}; // Example array with a missing number
    int missingNumber = obj.findMissingNumber(nums);
    cout << "The missing number is: " << missingNumber << endl;
    return 0;
}
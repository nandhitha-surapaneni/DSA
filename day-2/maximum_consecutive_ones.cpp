#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    void maximumConsecutiveOnes(vector<int>& nums){
        int maxCount = 0;
        int currentCount = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                currentCount++;
                maxCount = max(maxCount, currentCount);
            }
            else{
                currentCount = 0;
            }
        }
        cout << "Maximum consecutive ones: " << maxCount << endl;
    }
};  

int main(){
    Solution obj;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    obj.maximumConsecutiveOnes(nums);
    return 0;
}
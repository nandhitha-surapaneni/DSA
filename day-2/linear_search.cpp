#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    void linearSearch(vector<int>& nums, int target){
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target){
                cout << "Element found at index: " << i << endl;
                return;
            }
        }
        cout << "Element not found in the array." << endl;
    }
};  

int main(){
    Solution obj;
    vector<int> nums = {2, 3, 3, 5, 4};
    int target = 5;
    obj.linearSearch(nums, target);
    return 0;
}
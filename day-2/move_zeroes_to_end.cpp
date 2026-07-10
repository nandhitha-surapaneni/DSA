#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    void moveZeroestoEnd(vector<int>& nums){
        int left = 0;
        int right = 0;
        while(right < nums.size()){
            if(nums[right] != 0){
                swap(nums[left], nums[right]);
                left++;
            }
            right++;
        }
    }
};

int main(){
    Solution obj;
    vector<int> nums = {0, 1, 0, 3, 12};
    obj.moveZeroestoEnd(nums);
    cout << "Array after moving zeroes to the end: ";
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
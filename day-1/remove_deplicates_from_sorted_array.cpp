#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int duplicates(vector<int>& nums){
        for(int i=0; i<nums.size() - 1; i++){
            if (nums[i] == nums[i+1]){
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};

int main(){
    Solution obj;
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    int newSize = obj.duplicates(nums);
    cout << "New size after removing duplicates: " << newSize << endl;
    cout << "Array after removing duplicates: ";
    for(int i=0; i<newSize; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
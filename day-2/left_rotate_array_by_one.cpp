#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    void leftRotateByOne(vector<int>& nums){
        int left = 0;
        int right = 1;
        while(right < nums.size()){
            swap(nums[left], nums[right]);
            left++;
            right++;
        }
    }
};  

int main(){
    Solution obj;
    vector<int> nums = {2, 3, 3, 5, 4};
    obj.leftRotateByOne(nums);
    cout << "Array after left rotation by one: ";
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
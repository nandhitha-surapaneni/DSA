#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    void reverse(vector<int>& nums, int start, int end){
        while(start < end){
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    void leftRotateByK(vector<int>& nums, int k){
        int n = nums.size();
        k = k % n; // In case k is greater than n
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
        reverse(nums, 0, n - 1);
    }
};

int main(){
    Solution obj;
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;
    obj.leftRotateByK(nums, k);
    cout << "Array after left rotation by " << k << " places: ";
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
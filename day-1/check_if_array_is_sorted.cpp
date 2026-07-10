#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    bool sortedArray(vector<int>& nums) {
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i-1] > nums[i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3, 4, 5};
    if (obj.sortedArray(nums)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    return 0;
}
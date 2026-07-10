#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int secondLargestElement(vector<int>& nums) {
        int max = INT_MIN;
        int secondMax = INT_MIN;
        for (int num : nums) {
            if (num > max) {
                secondMax = max;
                max = num;
            } else if (num > secondMax && num != max) {
                secondMax = num;
            }
        }
        return secondMax;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {3, 8, 1, 10, 5};
    cout << obj.secondLargestElement(nums) << endl;
    return 0;
}
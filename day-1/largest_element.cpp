#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int largestElement(vector<int>& nums) {
        int largest = INT_MIN;
        for (int num : nums) {
            if (num > largest) {
                largest = num;
            }
        }
        return largest;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {3, 8, 1, 10, 5};
    cout << obj.largestElement(nums) << endl;
    return 0;
}

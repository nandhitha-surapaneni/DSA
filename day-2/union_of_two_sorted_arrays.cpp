#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    void union_of_two_sorted_arrays(vector<int>& nums1, vector<int>& nums2){
        vector<int> result;
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] < nums2[j]){
                result.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i] > nums2[j]){
                result.push_back(nums2[j]);
                j++;
            }
            else{
                result.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        while(i < nums1.size()){
            result.push_back(nums1[i]);
            i++;
        }
        while(j < nums2.size()){
            result.push_back(nums2[j]);
            j++;
        }
        cout << "Union of two sorted arrays: ";
        for(int k=0; k<result.size(); k++){
            cout << result[k] << " ";
        }
        cout << endl;
    }
};

int main(){
    Solution obj;
    vector<int> nums1 = {1, 2, 4, 5, 6};
    vector<int> nums2 = {2, 3, 5, 7};
    obj.union_of_two_sorted_arrays(nums1, nums2);
    return 0;
}
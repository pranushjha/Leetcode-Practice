#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i}; // found the pair
            }
            mp[nums[i]] = i; // store the current number with index
        }
        return {}; // just in case, though problem guarantees one solution
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    // Call the function
    vector<int> result = sol.twoSum(nums, target);

    // Print the result
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}

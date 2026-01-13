#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
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

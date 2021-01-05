/*
 * Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:

Input:  nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input:  nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input:  nums = [3,3], target = 6
Output: [0,1]

Constraints:
            2 <= nums.length <= 103
            -109 <= nums[i] <= 109
            -109 <= target <= 109
Only one valid answer exists.
 */


#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    Solution() {};

    vector<int> twoSum(vector<int> &nums, int target) {
        map<int, int> map;
        vector<int> indices;

        for (int i = 0; i < nums.size(); i++) {
            if (map.count(target - nums[i]) && map[target - nums[i]] != i) {
                indices.push_back(map[target - nums[i]]);
                indices.push_back(i);
            }
            map[nums[i]] = i;

        }
        return indices;

    }

};


int main() {
    Solution solution;
    vector<int> nums = {3, 2, 4};
    int target = 6;

    vector<int> two_sum = solution.twoSum(nums, target);
    vector<int>::iterator iterator = two_sum.begin();
    for (; iterator < two_sum.end(); ++iterator) {

        cout << *iterator << " "<< flush;
    }
}

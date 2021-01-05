#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    Solution() = default;;

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

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector <int> res(2);
      map<int, int> nums_to_index;
      for (int i = 0; i < nums.size(); i++) {
        nums_to_index[nums[i]] = i;
      }
      for (int i = 0; i < nums.size(); i++) {
        int diff {target - nums[i]};
        auto it = nums_to_index.find(diff);
        if (it != nums_to_index.end() && it -> second != i) {
          res[0] = i;
          res[1] = it -> second;
          return res;
        }
      }
    }
};

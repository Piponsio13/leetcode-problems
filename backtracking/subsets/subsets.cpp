class Solution {
public:
    vector<vector<int>>res;
    vector<int>subset;

    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(0,nums);
        return res;
    }

    void backtrack(int start, vector<int>&nums){
        res.push_back(subset);

        for(int i = start; i < nums.size(); i++){
            subset.push_back(nums[i]);
            backtrack(i + 1, nums);
            subset.pop_back();
        }
    }
};
class Solution {
private:
void subset(int ind, vector<int>& nums, vector<int> &output, vector<vector<int>> &ans){
    ans.push_back(output);
    for(int i=ind; i<nums.size(); i++){
        if(i!=ind && nums[i]==nums[i-1]) continue;
        output.push_back(nums[i]);
        subset(i+1, nums, output, ans);
        output.pop_back();
    }
}
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> output; 
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        subset(0, nums, output, ans);
        return ans;
    }
};

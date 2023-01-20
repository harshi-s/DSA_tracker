class Solution {
private:
void combine(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &output){
    if(ind==arr.size()){
        if(target==0){
            ans.push_back(output);
        }
        return;
    }
    // pick the element
    if(arr[ind]<=target){
        output.push_back(arr[ind]);
        combine(ind, target-arr[ind], arr, ans, output);
        output.pop_back();
    }
    //exclude the element
    
    combine(ind+1, target, arr, ans, output);
}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> output;
        vector<vector<int>> ans;
        combine(0, target, candidates, ans, output);
        return ans;
    }
};

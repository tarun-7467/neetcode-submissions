class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int currVal = nums[i];
            for(int j = 0; j < nums.size(); j++){
                if(currVal == nums[j] && i != j){
                    return true;
                }
            }
        }
        return false;
    }
};
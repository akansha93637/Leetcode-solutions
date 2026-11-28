class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxInd=0;
        for (int i = 0 ;i< nums.size()-1; i++){
            if (i> maxInd){
                return false;
            }
            maxInd= max(maxInd , i+ nums[i]);
        }
        if(maxInd< nums.size()-1)
        return false;
        return true;
    }
};
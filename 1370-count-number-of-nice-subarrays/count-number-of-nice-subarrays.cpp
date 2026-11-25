class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        if(k<0) return 0;
        int left =0;
        int right=0;
        int sum=0;
        int count=0;
        int n = nums.size();
        while(right<nums.size()){
            sum+=(nums[right]%2);
        
while(sum>k){
    sum=sum-(nums[left]%2);
    left=left+1;
}

count= count+(right-left+1);
        right=right+1;
}
return count ;
    }
 int numberOfSubarrays(vector<int>& nums, int k) {

        return atMost(nums, k) - atMost(nums, k - 1);

    }
};
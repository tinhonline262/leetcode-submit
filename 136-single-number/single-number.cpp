class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,a=0;
        for(i=0;i<nums.size();i++){
            a=a^nums[i];
        }
        return a;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x = 0, ctr = 0;
        for(int i = 0; i < nums.size(); i++){
            if(ctr == 0) x = nums[i];
            if(x == nums[i]) ctr++;
            if(x != nums[i]) ctr--;
        }
        return x;
    }
};
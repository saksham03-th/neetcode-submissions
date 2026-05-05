class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, result = 0;
        int n = nums.size();
        for(int x:nums){
            if(x == 1){
                count++;
                result = max(count,result);
            
            }
            else if(x != 1){
                count = 0;
            }

        }return max(result,count);
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        auto last = unique(nums.begin(), nums.end());
        nums.erase(last, nums.end());
        int seqn = 1, longest_seqn = 0, cons = 0;
        int size = nums.size();
        if(nums.size() == 0) return longest_seqn;
        for(int i = 0; i < size; i++){
            int curr = nums[i];
            if(i > 0){
                if(curr == cons) seqn++;
                else seqn = 1;
            }
            cons = curr + 1;
            if(seqn > longest_seqn) longest_seqn = seqn;
        }
    return longest_seqn;
    }
};

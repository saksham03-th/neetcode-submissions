class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) mp[nums[i]]++;
        vector<pair<int, int>> freq;
        for(auto it : mp) freq.push_back({it.second, it.first});
        sort(freq.begin(), freq.end());
        vector<int> op(k);
        int j = k;
        for(int i = freq.size() - 1; i >= (int)freq.size() - k; i--){
            j--;
            op[j] = (freq[i]).second;
        }
        return op;
    }
};

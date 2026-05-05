class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;

        for(int num : arr){
            mp[num]++;

        }
        int res = -1;

        for(auto &it : mp){
            int value = it.first;
            int count = it.second;

            if(count == value){
                res = max(value,res);
            }
            
        }return res;
    }
};
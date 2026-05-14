class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size());
        vector<int>& temp = temperatures;
        int count, i = 0, j = i + 1;
        int n = temp.size();
        while(i < n){
            if(i == n - 1){
                res[i] = 0; 
                break;
            }
            count = 0;
            j = i + 1;
            while(j < n){    
                if(temp[i] < temp[j]){ 
                    count++; 
                    res[i] = count;
                    break;
                }
                else{
                count++;                
                j++;
                }
            }
            i++;
        }
    return res;
    }
};
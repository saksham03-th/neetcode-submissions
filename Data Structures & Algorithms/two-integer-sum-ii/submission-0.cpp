class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j = numbers.size() - 1, i = 0;
        while(i<j){
            if(numbers[i] + numbers[j] > target) j--;
            else if(numbers[i] + numbers[j] < target) i++;
            else if(numbers[i] + numbers[j] == target){
                numbers.resize(2);
                numbers[0] = i + 1;
                numbers[1] = j + 1;
                break;
            }
        }
        return numbers;
    }
};

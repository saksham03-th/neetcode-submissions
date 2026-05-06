class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0; i < s.length(); i++){
            if(s[i]>='a' && s[i]<='z') s[i] = static_cast<char>(static_cast<char>(s[i]-32));
        }
        int j = s.length()-1;
        for(int i = 0; i < ceil(s.length()/2); i++){
            while(1 && j>i){   
                if(!((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))) i++;
                else break;
            }
            while(1 && j>i){
                if(!((s[j]>='A' && s[j]<='Z') || (s[j]>='a' && s[j]<='z') || (s[j]>='0' && s[j]<='9'))) j--;
                else break;
            }
            if(i > j) return false;
            if((s[i]!=s[j])) return false;
            j--;
        }
    return true;
    }
};

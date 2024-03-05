class Solution {
public:
    int minimumLength(string s) {
        int left = 0;
        int right = s.size()-1;
        
        while(left<right && s[left] == s[right]){
            char ch = s[left];
            while(ch == s[left] && left<=right){
                left++;
            }
            while(ch == s[right] && left<=right){
                right--;
            }
        }
        return right - left + 1;
    }
};
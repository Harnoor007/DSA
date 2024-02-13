class Solution {
private:
    bool check(string &str){
        int s = 0;
        int e = str.length() - 1;
        while(s<e){
            if(str[s] != str[e])
                return false;
            s++;
            e--;
        }
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i<words.size(); i++){
            string temp = words[i];
            if(check(temp))
                return temp;
        }
        return "";
    }
};
class Solution {
private:
    char lowercase(char ch){
        if (ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
            return ch;
        else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
public:
    bool check(string str){
        int s = 0;
        int e = str.size()-1;
        while(s<=e){
            if(lowercase(str[s]) != lowercase(str[e]))
                return 0;
            else{
                s++;
                e--;
            }
        }
        return 1;
    }
    bool isPalindrome(string s) {
        string temp;
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i]))
                temp.push_back(s[i]);
        }
        return check(temp);
    }
};
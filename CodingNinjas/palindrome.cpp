#include <bits/stdc++.h> 

char lowercase(char ch){
    if (ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(string s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start < end)
    {
         if ((s[start] >= 33 && s[start] <= 47) || (s[start] >= 58 && s[start] <= 64) || isspace(s[start]))
        {
            start++;
            continue;
        }

        if ((s[end] >= 33 && s[end] <= 47) || (s[end] >= 58 && s[end] <= 64) || (isspace(s[end])))
        {
            end--;
            continue;
        }
        if (lowercase(s[start]) != lowercase(s[end]))
        {
            return false;
        }
        else{
        start++;
        end--;
        }
    }

    return true;
}
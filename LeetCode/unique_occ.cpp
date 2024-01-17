class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> cnt;
        set<int> unique;
        for(int i = 0; i<arr.size(); i++){
            unique.insert(arr[i]);
        }
        for(int i : unique){
            int count = 0;
            for(int j = 0; j<arr.size(); j++){
                if(i == arr[j]){
                    count++;
                }
            }
            cnt.push_back(count);
        }
        for(int i = 0; i<cnt.size(); i++){
            for(int j = i+1; j<cnt.size(); j++){
                if(cnt[i] == cnt[j])
                    return false;
            }
        }
        return true;
    }
};
//o(n^2)
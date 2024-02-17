#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>

using namespace std;

unordered_map<int, int> countOccurrences(const vector<int>& arr) {
    unordered_map<int, int> occurrences;
    for (int num : arr) {
        occurrences[num]++;
    }
    return occurrences;
}

bool cmp(pair<int,int> &a, pair<int,int> &b){//If in class, use static keyword
    return a.second < b.second;
}

int minUnique(vector<pair<int,int>> &sortedOcc, int k){
    for(int i=0;i<sortedOcc.size();i++){
        if(k == sortedOcc[i].second){
            return (sortedOcc.size()-i-1);
        }
        else if(k<sortedOcc[i].second){
            return sortedOcc.size()-i;
        }
        k = k - sortedOcc[i].second;
    }
}

int main() {
    vector<int> arr = {5,5,4};
    int k = 1;
    unordered_map<int, int> occurrences = countOccurrences(arr);

    /*copy the contents of map(number : count) in a vector<pair<int,int>>*/
    vector< pair<int, int> > sortedOcc(occurrences.begin(), occurrences.end());

    /*Sort the vector<pair<int,int>> acc to the pair.second(count) value using cmp function*/
    sort(sortedOcc.begin(), sortedOcc.end(), cmp);

    // cout << "Sorted Occurrences:" << endl;
    // for (const auto& pair : sortedOcc) {
    //     cout << pair.first << ": " << pair.second << endl;
    // }
    
    int ans = minUnique(sortedOcc,k);
    cout<<ans;
    return 0;
}

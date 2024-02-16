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

bool cmp(pair<int,int> &a, pair<int,int> &b){
    return a.second < b.second;
}

int main() {
    vector<int> arr = {4,3,1,1,3,3,2};
    vector<int> ans;
    
    unordered_map<int, int> occurrences = countOccurrences(arr);

    /*copy the contents of map(number : count) in a vector<pair<int,int>>*/
    vector< pair<int, int> > sortedOcc(occurrences.begin(), occurrences.end());

    /*Sort the vector<pair<int,int>> acc to the pair.second(count) value using cmp function*/
    sort(sortedOcc.begin(), sortedOcc.end(), cmp);

    cout << "Sorted Occurrences:" << endl;
    for (const auto& pair : sortedOcc) {
        cout << pair.first << ": " << pair.second << endl;
    }
    int k = 3;
    for(int i = k; i<sortedOcc.size(); ++i){
        ans.push_back(sortedOcc[i].first);
    }
    cout<<"Ans:"<< endl;
    for(int i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Least no of unique integers: "<<ans.size();
    
    return 0;
}

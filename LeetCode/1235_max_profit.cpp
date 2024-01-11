#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &a){
    for(int i : a){
        cout << i << ' ';
    }
}
void jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit){
        int n = startTime.size();
        for(int i = 0; i < n; i++){
        int maxIndex = i;
        for(int j = i+1; j < n; j++){
            if(profit[j] >= profit[maxIndex])
                maxIndex = j;
        }
        swap(profit[maxIndex], profit[i]);
        swap(startTime[maxIndex], startTime[i]);
        swap(endTime[maxIndex], endTime[i]);
    }
    // print(profit);
    // cout << endl;
    // print(startTime);
    // cout << endl;
    // print(endTime);
    // cout << endl;
    int maxPf = 0;
    for(int i = 0; i<n; i++){
        int minSt = i;
        for(int j = i+1; j<n; j++){
            if(startTime[i]<startTime[minSt]){
                minSt = i;
            }
        }
        maxPf = minSt;

    }
    cout << profit[maxPf] << ' ' << startTime[maxPf];
}
int main(){
    vector<int> startTime; 
    vector<int> endTime;
    vector<int> profit;
    startTime = {1,2,3,3}, endTime = {3,4,5,6}, profit = {50,10,40,70};
    jobScheduling(startTime, endTime, profit);

}
#include<bits/stdc++.h>
#include<vector>
using namespace std;
long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int s = nums.size()-1;
        while(s>=0){
            long long sum = 0;
            for(int i=0; i<s; i++){
                sum += nums[i];
            }
            if(nums[s] < sum){
                return nums[s]+sum; 
            }
            s--;
        }
        return -1;
    }
int main(){
    vector<int> nums = {1,12,1,2,5,50,3};
    long long x = largestPerimeter(nums);
    cout<<x;
    return 0;
}
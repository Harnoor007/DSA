#include <bits/stdc++.h> 
int getNumber(vector<int>&a){
    int n = a.size();
    int digit = 0;
    int temp = n-1;
    for(int i = 0; i<n; i++){
        digit += a[i]*(pow(10, temp));
        temp--;
    }
    return digit;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int x = getNumber(a);
	int y = getNumber(b);
	int sum = x + y;
	vector<int> ans;
    while(sum>0){
        int d = sum%10;
        ans.push_back(d);
        sum = sum/10;
    }
    reverse(ans.begin(), ans.end());
	return ans;
}
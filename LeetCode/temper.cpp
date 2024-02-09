#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> dys_vec;
        for(int i = 0; i<temp.size(); i++){
            int days=0;
            int x = temp[i];
            int j = i+1;
            while(j<temp.size()){
                if(temp[j]>x){
                    days = j-i;
                    break;
                }
                else{
                    j++;
                }
            }
            dys_vec.push_back(days);
        }
        return dys_vec;
    }
int main(){
    vector<int> temp = {73,74,75,71,69,72,76,73};
    vector<int> dys_vec = dailyTemperatures(temp);
    for(int i : dys_vec){
        cout<<i<<endl;
    }
    return 0;
}
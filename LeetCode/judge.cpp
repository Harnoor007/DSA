#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> trust = {{1,3},{2,3}};
    int n = 3;
    vector<int> in(n+1), out(n+1);
    for(auto i: trust){
        out[i[0]]++;
        in[i[1]]++;
    }
    cout<<endl;
    for(int i: out){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i: in){
        cout<<i<<" ";
    }
    return 0;
}
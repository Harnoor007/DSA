#include<bits/stdc++.h>
#include<vector>
using namespace std;
int evaluate(string i, stack<int> &st){
    char Operator = i[0];
    cout<<Operator<<endl;
    int a = st.top();
    st.pop();
    int b = st.top();
    st.pop();
    if(Operator == '+') return a + b;
        else if(Operator == '-') return b - a;
        else if(Operator == '*') return (long)a*b;
        return b/a;
    
}
int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0; i < tokens.size(); i++) {
            try {
                int num = stoi(tokens[i]);
                st.push(num);
            } catch (const std::invalid_argument&) {
                int x = evaluate(tokens[i], st);
                st.push(x);
            } catch (const std::out_of_range&) {
            }
        }
        return st.top();
}
int main(){
    vector<string> tokens = {"4","13","5","/","+"};
    int ans = evalRPN(tokens);
    cout << ans <<endl;
    return 0;
}
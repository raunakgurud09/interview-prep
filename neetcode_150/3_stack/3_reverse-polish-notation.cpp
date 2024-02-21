#include <vector>
#include <string>
class Solution {
public:

    long resolve(int a,int b, char op){
        if(op == '+') return a + b;
        else if(op == '-') return a - b;
        else if(op == '*') return (long)a * b;
        else return a/b;
    }

    int evalRPN(vector<string>& tokens) {
        stack<long> st;
        int n = tokens.size();
        for(int i = 0; i < n; i++){

            if(tokens[i].size() == 1 and tokens[i][0] < 48){
                long integer2 = st.top();
                st.pop();
                long integer1 = st.top();
                st.pop();
                
                string Operator = tokens[i];
                long res = resolve(integer1, integer2 , Operator[0]);
                st.push(res);
            }else 
                st.push(stol(tokens[i]));
        }
        return st.top();
    }
};
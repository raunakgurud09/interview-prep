class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ds;
        generate(n,0,0,"",ds);
        return ds;
    }


private:
    void generate(int n, int open, int close, string str,vector<string> &ds){
        if(open == n && close == n){
            ds.push_back(str);
            return;
        }

        if (open < n) {
            generate(n,open+1,close,str+'(',ds);
        }

        if (close < open) {
            generate(n,open,close+1,str+')',ds);
        }

    }
};
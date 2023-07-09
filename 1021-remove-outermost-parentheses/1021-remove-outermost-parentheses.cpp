class Solution {
public:
    string removeOuterParentheses(string S) {

        string res = "";
        int stack = 1, start = 0;

        for(int i = 1; i < S.size(); i ++){

            if(S[i] == '(') stack ++;
            else stack --;

            if(stack == 0){
                res += S.substr(start + 1, i - start + 1 - 2);
                start = i + 1;
            }
        }
        return res;
    }
};
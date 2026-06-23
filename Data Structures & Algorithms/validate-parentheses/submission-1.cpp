class Solution {
public:
    bool isValid(string s) {
        std::stack<char> temp;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                temp.push(s[i]);
            } else {
                if(temp.size() > 0){
                    if(temp.top() == '(' && s[i] == ')'){
                        temp.pop();
                    }
                    else if(temp.top() == '[' && s[i] == ']'){
                        temp.pop();
                    }
                    else if(temp.top() == '{' && s[i] == '}'){
                        temp.pop();
                    } else {
                        temp.push(s[i]);
                    }
                } else {
                    return false;
                }
            }
        }

        if(temp.size() > 0){
            return false;
        }
        return true;
    }
};

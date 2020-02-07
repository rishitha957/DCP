class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        if(s[0]==')' || s[0]==']' || s[0]=='}'){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='[' || s[i]=='{' || s[i]=='('){
                s1.push(s[i]);
            }
            else{
                if(s1.size()==0){
                    return false;
                }
                if(s[i]=='}'){
                    if(s1.top()=='{'){
                        s1.pop();
                    }
                    else{
                        return false;
                    }
                }
                if(s[i]==')'){
                    if(s1.top()=='('){
                        s1.pop();
                    }
                    else{
                        return false;
                    }
                }
                if(s[i]==']'){
                    if(s1.top()=='['){
                        s1.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        if(s1.size()!=0)
            return false;
        return true;
        
    }
};

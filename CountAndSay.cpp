class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        if(n==1){
            return s;
        }        
        while(--n){
            int ind = 0;
            string s1 = "";
            while(ind <s.size()){
                int count = 1;
                while(ind+1 < s.size() && s[ind]==s[ind+1]){
                    ind++;
                    count++;
                }
                s1 += to_string(count)+s[ind];
                count = 1;
                ind++;
            }
            s = s1;
        }
        return s;
    }
};

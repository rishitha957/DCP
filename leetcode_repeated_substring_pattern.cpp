class Solution {
public:
    void compute_lps(string s, int n, int lps[]){
        int len = 0;
        lps[0] = 0;
        int i=1;
        while(i<n){
            if(s[i]==s[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else{
                if(len!=0){
                    len = lps[len-1];
                }
                else{
                    lps[i] = 0;
                    i++;
                }
            }
        }
        // cout<<"test - len- "<<lps[n-1]<<endl;
    }
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        int lps[s.size()];
        compute_lps(s,s.size(),lps);
        int len = lps[n-1];
        // cout<<"test - len- "<<len<<endl;
        if(len>0 && n%(n-len)==0){
            return true;
        }
        else{
            return false;
        }
    }
};

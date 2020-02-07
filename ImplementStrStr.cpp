class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0){
            return 0;
        }
        for(int i=0;i<haystack.size();i++){
            if(needle[0]==haystack[i] && i+needle.size() <= haystack.size()){
                string s = haystack.substr(i,needle.size());
                // cout<<"s - "<<s<<" i - "<<i<<" o - "<<i-1+needle.size()<<endl;
                if(s==needle){
                    return i;
                }
                //i=i+needle.size();
            }
        }
        return -1;
    }
};

// // Sliding window approach
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> u;
        int a=0,b=0;
        int m = 0;
        while(b<s.size()){
            if(u.find(s[b])==u.end()){
                u.insert(s[b]);
                b++;
                m = m > u.size() ? m : u.size();
            }
            else{
                u.erase(s[a]);
                a++;
            }
        }
        return m;
    }
};

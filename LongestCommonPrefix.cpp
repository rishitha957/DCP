class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min = INT_MAX;
        int ind;
        if(strs.size()==0){
            return "";
        }
        for(int i=0;i<strs.size();i++){
            if(min>strs[i].size()){
                min = strs[i].size();
                ind = i;
            }
        }
        for(int i=0;i<min;i++){
            char ch = strs[ind][i];
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=ch){
                    return strs[ind].substr(0,i);
                }
            }
        }
        return strs[ind];
    }
};

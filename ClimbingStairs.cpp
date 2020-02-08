class Solution {
public:
    int climbStairs(int n) {
        vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        if(n==1){
            return v[0];
        }
        if(n==2){
            return v[1];
        }
        if(n==3){
            return v[2];
        }
        for(int i=3;i<n;i++){
            v.push_back(v[i-1]+v[i-2]);
        }
        return v[n-1];
    }
};

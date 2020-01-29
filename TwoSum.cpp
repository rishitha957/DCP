class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> u;
        vector<int> v1;
        int flag = 0;
        for(int i=0;i<nums.size();i++){
            int t = target - nums[i];
            if(u.find(t)!=u.end()){
                v1.push_back(u[t]);
                v1.push_back(i);
                return v1;
            }
            u[nums[i]] = i;
        }
        return v1;
    }
};

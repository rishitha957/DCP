class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        // unordered_set<int> u;
        // for(int i=0;i<nums.size();i++){
        //     if(u.find(nums[i])==u.end()){
        //         u.insert(nums[i]);
        //     }
        // }
        // return nums.size();
        for(int i=1;i<v.size();){
            cout<<"size - "<<v.size()<<" i - "<<i<<endl;
            if(v[i-1]==v[i]){
                v.erase(v.begin()+i);
            }
            else{
                i++;
            }
        }
        cout<<"size - "<<v.size()<<endl;
        return v.size();
    }
};

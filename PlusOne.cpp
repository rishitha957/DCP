class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //for(int i=digits.size()-1; i>=0;i++){
            int c = 1;
            int n = digits.size() - 1;
            while(c!=0 && n>=0){
                int sum = (digits[n]+c);
                c = sum/10;
                digits[n] = sum%10;
                n--;
            }
            if(c!=0 && n<0){
                digits.insert(digits.begin(),c);
            }
            return digits;
    }
};

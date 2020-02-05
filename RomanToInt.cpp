class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m;
        
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        int res = 0;
        
        for(int i=0; i<(s.size()-1); i++){
            int a = m[s[i]];
            int b = m[s[i+1]];
            cout<<"a - "<<a<<" b - "<<b<<endl;
            if(a>=b){
                res += a;
            }
            else{
                cout<<"Here"<<endl;
                res -= a;
            }
        }
        cout<<"res - "<<res<<endl;
        res += m[s[s.size() - 1]];
        cout<<"res2 - "<<endl;
        return res;
        
    }
};
